// rea decompile_all
// name: FUN_004b9a50
// address: 0x4b9a50
// body: available
// range: 0x4b9a50-0x4b9bee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004b9a50(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006fcf26;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  *(undefined1 *)(in_ECX + 6) = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  iVar4 = *param_1;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = -1;
  in_ECX[0xe] = iVar4;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  *(undefined1 *)(in_ECX + 0x16) = 1;
  FUN_004b9780(*param_1);
  in_ECX[0xb20] = *piVar1;
  in_ECX[0xb21] = 0;
  in_ECX[0xb22] = 0;
  glGetIntegerv(0x8ca6,&param_1,uVar3);
  in_ECX[0xb23] = (int)param_1;
  local_8 = 0;
  if (*(code **)(*in_ECX + 0xa4) != (code *)0x0) {
    (**(code **)(*in_ECX + 0xa4))(0x8d40,in_ECX[1]);
  }
  glViewport(0,0,in_ECX[4],in_ECX[5]);
  glDisable(0xb71);
  local_8 = 0xffffffff;
  glDisable(0xbe2);
  in_ECX[8] = 0;
  in_ECX[7] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  FUN_004b9570();
  iVar4 = FUN_004b80e0();
  if (in_ECX[0xb22] != iVar4) {
    if (iVar4 != 0) {
      LOCK();
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
      UNLOCK();
    }
    puVar2 = (undefined4 *)in_ECX[0xb22];
    in_ECX[0xb22] = iVar4;
    if (puVar2 != (undefined4 *)0x0) {
      LOCK();
      piVar1 = puVar2 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*puVar2)(1);
      }
    }
  }
  ExceptionList = local_10;
  return;
}

