// rea decompile_all
// name: FUN_00508fa0
// address: 0x508fa0
// body: available
// range: 0x508fa0-0x5090e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_00508fa0(int *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  undefined1 *local_20;
  int local_1c;
  undefined1 local_15 [5];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00708250;
  local_10 = ExceptionList;
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  uVar5 = 0;
  if (0 < *(int *)(in_ECX + 0x124)) {
    bVar7 = *(int *)(in_ECX + 0x124) != 0;
    local_1c = in_ECX;
    do {
      if (bVar7) {
        local_20 = *(undefined1 **)(*(int *)(in_ECX + 0x11c) + uVar5 * 4);
      }
      else {
        local_20 = (undefined1 *)0x0;
      }
      iVar3 = param_1[2];
      iVar4 = iVar3 + 1;
      if (param_1[1] < iVar4) {
        if (iVar4 < 0) {
          iVar4 = iVar3 + 2;
        }
        uVar6 = iVar3 + 9 + (iVar4 >> 1) & 0xfffffff8;
        in_ECX = local_1c;
        if (param_1[1] != uVar6) {
          if ((int)uVar6 < 1) {
            FID_conflict__free((void *)*param_1);
            *param_1 = 0;
          }
          else if (*param_1 == 0) {
            iVar3 = FUN_004c554b();
            *param_1 = iVar3;
          }
          else {
            iVar3 = FUN_004c553b(*param_1,uVar6 * 8,uVar2);
            *param_1 = iVar3;
          }
          param_1[1] = uVar6;
          in_ECX = local_1c;
        }
      }
      iVar3 = param_1[2];
      param_1[2] = iVar3 + 1;
      puVar1 = (undefined8 *)(*param_1 + iVar3 * 8);
      if (puVar1 != (undefined8 *)0x0) {
        *puVar1 = *(undefined8 *)(local_20 + 0x78);
      }
      uVar5 = uVar5 + 1;
      bVar7 = uVar5 < *(uint *)(in_ECX + 0x124);
    } while ((int)uVar5 < (int)*(uint *)(in_ECX + 0x124));
  }
  local_20 = local_15;
  FUN_00411920(param_1[2] * 8 >> 3,&local_20);
  ExceptionList = local_10;
  return param_1;
}

