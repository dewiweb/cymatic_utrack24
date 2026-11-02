// rea decompile_all
// name: FUN_006b66d0
// address: 0x6b66d0
// body: available
// range: 0x6b66d0-0x6b6797 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006b66d0(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  
  puVar1 = (undefined4 *)in_ECX[0x57];
  if (puVar1 != (undefined4 *)0x0) {
    in_ECX[0x57] = 0;
    piStack_14 = (int *)0x1;
    piStack_18 = (int *)0x6b66f2;
    (**(code **)*puVar1)();
  }
  piStack_14 = (int *)0x6b66f9;
  iVar3 = FUN_006e9580();
  piStack_14 = in_ECX + 0x5c;
  piStack_18 = (int *)0x6b6708;
  puVar4 = (undefined4 *)(**(code **)(*(int *)(iVar3 + 0x44) + 4))();
  puVar1 = (undefined4 *)in_ECX[0x57];
  if ((puVar1 != puVar4) && (in_ECX[0x57] = (int)puVar4, puVar1 != (undefined4 *)0x0)) {
    piStack_18 = (int *)0x1;
    piStack_1c = (int *)0x6b6722;
    (**(code **)*puVar1)();
  }
  piVar2 = (int *)in_ECX[0x57];
  if (piVar2 != (int *)0x0) {
    piStack_18 = (int *)0x1;
    piStack_1c = (int *)0x6b6735;
    (**(code **)(*piVar2 + 0x28))();
    piStack_18 = (int *)0xffffffff;
    uStack_20 = 0x6b673f;
    piStack_1c = piVar2;
    FUN_006e5050();
  }
  if (*(int *)(in_ECX[0x57] + 0xb8) != 1) {
    *(undefined4 *)(in_ECX[0x57] + 0xb8) = 1;
    FUN_006e6400(auStack_24);
    FUN_006ce9f0(1);
  }
  piStack_18 = (int *)0x6b6776;
  (**(code **)(*in_ECX + 0x84))();
  piStack_18 = in_ECX + 0x21;
  if (piStack_18 != (int *)0x0) {
    piStack_1c = (int *)0x6b6792;
    FUN_004097d0();
  }
  return;
}

