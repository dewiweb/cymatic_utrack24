// rea decompile_all
// name: FUN_0059eea0
// address: 0x59eea0
// body: available
// range: 0x59eea0-0x59f200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0059ef3f) */
/* WARNING: Removing unreachable block (ram,0x0059ef9b) */

undefined4 *
FUN_0059eea0(undefined4 param_1,undefined4 param_2,undefined2 param_3,int param_4,undefined2 param_5
            ,undefined2 param_6,ushort param_7,undefined4 param_8,int param_9)

{
  undefined4 *in_ECX;
  undefined4 local_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined *puStack_58;
  uint uStack_54;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined4 *local_44;
  undefined1 *local_40;
  undefined4 *local_30;
  undefined4 *local_28;
  undefined4 *local_20;
  uint local_1c;
  undefined4 local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d7324;
  local_10 = ExceptionList;
  uStack_54 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1c = 0;
  local_4c = in_ECX;
  if (param_9 != 0) {
    in_ECX[10] = &DAT_005efda8;
    in_ECX[0x56] = &DAT_005efda0;
    in_ECX[0x59] = &DAT_005ea7d8;
    in_ECX[0x5c] = &DAT_005ea7cc;
    local_20 = in_ECX + 0x53;
    *local_20 = CPNS::IObject::vftable;
    local_28 = in_ECX + 0x55;
    *local_28 = CPNS::IHookedObject::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x56] + 4) + 0x158) =
         CPNS::IHookedObject::vftable;
    local_30 = in_ECX + 0x58;
    *local_30 = CPNS::IBaseOutput::vftable;
    *(undefined ***)((int)in_ECX + *(int *)(in_ECX[0x59] + 4) + 0x164) = CPNS::IBaseOutput::vftable;
    local_8 = 2;
    local_1c = 7;
    puStack_58 = (undefined *)0x0;
    uStack_5c = 0x59eff8;
    FUN_005a1690();
    local_8 = 3;
    local_1c = local_1c | 8;
  }
  local_18 = 0x4040000;
  puStack_58 = (undefined *)0x0;
  uStack_5c = param_8;
  uStack_60 = (uint)param_7;
  local_14 = (undefined1 *)&local_64;
  local_40 = (undefined1 *)&local_64;
  local_64 = 0x4040000;
  local_50 = FUN_00566590(6,param_1,param_2);
  local_8 = 4;
  *local_4c = CPCHAI::CController::vftable;
  *(undefined ***)((int)local_4c + *(int *)(local_4c[10] + 4) + 0x28) = CPCHAI::CController::vftable
  ;
  *(undefined ***)((int)local_4c + *(int *)(local_4c[10] + 8) + 0x28) = CPCHAI::CController::vftable
  ;
  *(undefined ***)((int)local_4c + *(int *)(local_4c[10] + 0xc) + 0x28) =
       CPCHAI::CController::vftable;
  *(undefined ***)((int)local_4c + *(int *)(local_4c[10] + 0x10) + 0x28) =
       CPCHAI::CController::vftable;
  *(int *)((int)local_4c + *(int *)(local_4c[10] + 4) + 0x24) = *(int *)(local_4c[10] + 4) + -0x124;
  *(int *)((int)local_4c + *(int *)(local_4c[10] + 8) + 0x24) = *(int *)(local_4c[10] + 8) + -300;
  *(int *)((int)local_4c + *(int *)(local_4c[10] + 0xc) + 0x24) =
       *(int *)(local_4c[10] + 0xc) + -0x138;
  *(int *)((int)local_4c + *(int *)(local_4c[10] + 0x10) + 0x24) =
       *(int *)(local_4c[10] + 0x10) + -0x144;
  *(undefined2 *)(local_4c + 0x44) = param_3;
  local_4c[0x45] = param_4;
  *(undefined2 *)(local_4c + 0x46) = param_5;
  *(undefined2 *)((int)local_4c + 0x11a) = param_6;
  local_44 = local_4c + 0x47;
  puStack_58 = (undefined *)0x59f165;
  FUN_00503bc0();
  puStack_58 = &DAT_0095c854;
  uStack_5c = 0x59f172;
  FUN_00503de0();
  *(undefined2 *)(local_44 + 4) = (undefined2)param_4;
  *(undefined2 *)((int)local_44 + 0x12) = param_5;
  *(undefined2 *)(local_44 + 5) = 0;
  *(undefined2 *)((int)local_44 + 0x16) = 0;
  *(undefined2 *)(local_44 + 6) = 3;
  *(ushort *)((int)local_44 + 0x1a) = (-(ushort)(param_4 != 2) & 0xfffe) + 1;
  *(undefined2 *)(local_44 + 7) = 0;
  *(undefined2 *)(local_4c + 0x50) = 0;
  local_4c[0x4f] = 0;
  ExceptionList = local_10;
  return local_4c;
}

