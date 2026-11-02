// rea decompile_all
// name: FUN_00639f50
// address: 0x639f50
// body: available
// range: 0x639f50-0x63a0e8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00639ff8) */
/* WARNING: Removing unreachable block (ram,0x0063a00b) */
/* WARNING: Removing unreachable block (ram,0x0063a026) */
/* WARNING: Removing unreachable block (ram,0x0063a030) */
/* WARNING: Removing unreachable block (ram,0x0063a044) */
/* WARNING: Removing unreachable block (ram,0x0063a050) */
/* WARNING: Removing unreachable block (ram,0x0063a057) */
/* WARNING: Removing unreachable block (ram,0x0063a05e) */

void FUN_00639f50(undefined1 param_1,undefined4 *param_2,void *param_3,undefined4 param_4,
                 int param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *in_EDX;
  undefined1 local_20 [4];
  undefined4 *local_1c [2];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0071f2d3;
  local_10 = ExceptionList;
  local_14 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20[0] = param_1;
  (**(code **)(*in_EDX + 0x10))(local_20,1,local_14);
  local_8 = CONCAT31(local_8._1_3_,1);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    param_2[1] = param_2[1] + 1;
    UNLOCK();
  }
  FUN_0063a110(param_2,0,0,0);
  local_1c[0] = (undefined4 *)((uint)local_1c[0] & 0xffffff00);
  (**(code **)(*in_EDX + 0x10))(local_1c,1);
  FID_conflict__free((void *)0x0);
  puVar3 = param_2;
  if ((0 < param_5) && (param_2 != (undefined4 *)0x0)) {
    local_1c[0] = &param_2;
    uVar4 = FUN_00447770(local_1c);
    if (uVar4 < (uint)puVar3[0xb]) {
      FUN_00410320(uVar4);
    }
  }
  FID_conflict__free(param_3);
  if (param_2 != (undefined4 *)0x0) {
    LOCK();
    piVar1 = param_2 + 1;
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)*param_2)(1);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}

