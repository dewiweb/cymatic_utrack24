// rea decompile_all
// name: FUN_0060eaa0
// address: 0x60eaa0
// body: available
// range: 0x60eaa0-0x60ebfe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0060eaa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0071c6be;
  local_10 = ExceptionList;
  uVar3 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  cVar2 = FUN_0060e0c0(in_ECX,param_1[0xc],param_1[0xd]);
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*in_ECX + 0x28))(uVar3);
    if (cVar2 != '\0') {
      puVar1 = (undefined4 *)in_ECX[10];
      if ((puVar1 != param_1) && (in_ECX[10] = (int)param_1, puVar1 != (undefined4 *)0x0)) {
        (**(code **)*puVar1)(1);
      }
      iVar4 = in_ECX[10];
      *(int *)(iVar4 + 0x10) = in_ECX[0x10];
      *(int *)(iVar4 + 0x14) = in_ECX[0x11];
      *(undefined8 *)(in_ECX[10] + 0x20) = *(undefined8 *)(in_ECX + 0x16);
      *(int *)(in_ECX[10] + 0x28) = in_ECX[0x14];
      iVar4 = in_ECX[10];
      *(int *)(iVar4 + 0x18) = in_ECX[0x12];
      *(int *)(iVar4 + 0x1c) = in_ECX[0x13];
      goto LAB_0060ebb8;
    }
  }
  puVar1 = (undefined4 *)in_ECX[10];
  if ((puVar1 != param_1) && (in_ECX[10] = (int)param_1, puVar1 != (undefined4 *)0x0)) {
    (**(code **)*puVar1)(1);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x18));
  local_8 = 0;
  FUN_0044c950(in_ECX[0x12],in_ECX[0x13]);
  iVar4 = in_ECX[10];
  in_ECX[0x10] = *(int *)(iVar4 + 0x10);
  in_ECX[0x11] = *(int *)(iVar4 + 0x14);
  *(undefined8 *)(in_ECX + 0x16) = *(undefined8 *)(iVar4 + 0x20);
  in_ECX[0x14] = *(int *)(iVar4 + 0x28);
  iVar4 = __alldiv(in_ECX[0x10],in_ECX[0x11],in_ECX[0xf],in_ECX[0xf] >> 0x1f);
  FUN_0060f000(iVar4 + 1);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x18));
LAB_0060ebb8:
  if (((0.0 < *(double *)(in_ECX + 0x16)) && (-1 < in_ECX[0x11])) &&
     ((0 < in_ECX[0x11] || (in_ECX[0x10] != 0)))) {
    ExceptionList = local_10;
    return 1;
  }
  ExceptionList = local_10;
  return 0;
}

