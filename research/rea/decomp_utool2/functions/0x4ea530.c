// rea decompile_all
// name: FUN_004ea530
// address: 0x4ea530
// body: available
// range: 0x4ea530-0x4ea5bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ea530(uint param_1,undefined4 param_2)

{
  uint *puVar1;
  int in_ECX;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  for (puVar1 = *(uint **)(*(int *)(in_ECX + 0x80) + (iVar4 % *(int *)(in_ECX + 0x88)) * 4);
      puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[2]) {
    if (*puVar1 == param_1) {
      piVar2 = (int *)puVar1[1];
      goto LAB_004ea56d;
    }
  }
  piVar2 = (int *)0x0;
LAB_004ea56d:
  (**(code **)(*piVar2 + 0x28))(param_2);
  puVar1 = *(uint **)(*(int *)(in_ECX + 0x80) + (iVar4 % *(int *)(in_ECX + 0x88)) * 4);
  do {
    if (puVar1 == (uint *)0x0) {
      uVar3 = 0;
LAB_004ea59d:
      FUN_006e9790(0xffffffff,0xffffffff,*(undefined4 *)(uVar3 + 0x18),*(undefined4 *)(uVar3 + 0x1c)
                  );
      return;
    }
    if (*puVar1 == param_1) {
      uVar3 = puVar1[1];
      goto LAB_004ea59d;
    }
    puVar1 = (uint *)puVar1[2];
  } while( true );
}

