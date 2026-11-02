// rea decompile_all
// name: FUN_004ba550
// address: 0x4ba550
// body: available
// range: 0x4ba550-0x4ba651 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004ba550(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_ECX;
  undefined1 local_20 [16];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00702886;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (*in_ECX != 0) {
    FUN_004b9ce0(DAT_00c76070 ^ (uint)&stack0xfffffffc);
    iVar1 = in_ECX[0x16];
    iVar2 = *(int *)(param_1 + 100);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar2 + 8);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar2 + 0x14);
    iVar1 = *(int *)(param_1 + 100);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 100) = 0;
      FUN_004bfe14(iVar1,0x18);
    }
    piVar3 = (int *)in_ECX[0x16];
    local_8 = 0;
    if (*(code **)(*piVar3 + 0xa4) != (code *)0x0) {
      (**(code **)(*piVar3 + 0xa4))(0x8d40,piVar3[1]);
    }
    glViewport(0,0,piVar3[4],piVar3[5]);
    glDisable(0xb71);
    local_8 = 0xffffffff;
    (**(code **)(*(int *)*in_ECX + 0x2c))(local_20);
    (**(code **)(*(int *)*in_ECX + 0x44))();
  }
  ExceptionList = local_10;
  return;
}

