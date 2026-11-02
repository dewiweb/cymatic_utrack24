// rea decompile_all
// name: FUN_00693fb0
// address: 0x693fb0
// body: available
// range: 0x693fb0-0x694093 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00693fb0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int local_28;
  undefined1 local_18 [20];
  
  uVar3 = FUN_0048d850();
  puVar4 = (undefined4 *)FUN_004107c0(local_18,uVar3);
  FUN_006e9790(*puVar4,puVar4[1],puVar4[2],puVar4[3]);
  iVar1 = *(int *)(in_ECX + 0x7c);
  local_28 = SUB84((double)*(float *)(*(int *)(in_ECX + 0x108) + 0x14) + 6755399441055744.0,0);
  if ((*(int *)(iVar1 + 0x90) != 0x10) || (*(int *)(iVar1 + 0x94) != local_28)) {
    *(undefined4 *)(iVar1 + 0x90) = 0x10;
    *(int *)(iVar1 + 0x94) = local_28;
    FUN_006abba0();
  }
  FUN_00696340();
  if (*(char *)(in_ECX + 0x96) == '\0') {
    FUN_00696170();
  }
  else {
    piVar2 = *(int **)(in_ECX + 0xf0);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*(int *)(in_ECX + 0x70) + 0x1c))(local_18);
      uVar3 = FUN_0046fc10(&stack0xffffffd4,*(undefined4 *)(in_ECX + 0xfc),
                           *(undefined4 *)(in_ECX + 0x100));
      (**(code **)(*piVar2 + 0xb0))(uVar3);
      return;
    }
  }
  return;
}

