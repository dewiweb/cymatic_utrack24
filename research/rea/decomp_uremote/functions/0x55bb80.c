// rea decompile_all
// name: FUN_0055bb80
// address: 0x55bb80
// body: available
// range: 0x55bb80-0x55c268 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0055bc25) */
/* WARNING: Removing unreachable block (ram,0x0055bc85) */

HKEY__ * FUN_0055bb80(undefined4 param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  HKEY__ *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005d3fb9;
  local_10 = ExceptionList;
  uVar1 = DAT_00955fd4 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    in_ECX[10].unused = (int)&DAT_005ee720;
    in_ECX[0x61].unused = (int)&DAT_005efda0;
    in_ECX[100].unused = (int)&DAT_005ea7d8;
    in_ECX[0x5e].unused = (int)CPNS::IObject::vftable;
    in_ECX[0x60].unused = (int)CPNS::IHookedObject::vftable;
    *(undefined ***)((int)&in_ECX[0x61].unused + *(int *)(in_ECX[0x61].unused + 4)) =
         CPNS::IHookedObject::vftable;
    in_ECX[99].unused = (int)CPNS::IBaseLocalDevice::vftable;
    *(undefined ***)((int)&in_ECX[100].unused + *(int *)(in_ECX[100].unused + 4)) =
         CPNS::IBaseLocalDevice::vftable;
    local_8 = 2;
  }
  FUN_0054f350(param_1,*param_2,in_ECX,0);
  local_8 = 3;
  in_ECX->unused = (int)CPCHAI::CBaseLocalDevice::vftable;
  *(undefined ***)((int)&in_ECX[10].unused + *(int *)(in_ECX[10].unused + 4)) =
       CPCHAI::CBaseLocalDevice::vftable;
  *(undefined ***)((int)&in_ECX[10].unused + *(int *)(in_ECX[10].unused + 8)) =
       CPCHAI::CBaseLocalDevice::vftable;
  *(undefined ***)((int)&in_ECX[10].unused + *(int *)(in_ECX[10].unused + 0xc)) =
       CPCHAI::CBaseLocalDevice::vftable;
  *(int *)((int)&in_ECX[9].unused + *(int *)(in_ECX[10].unused + 4)) =
       *(int *)(in_ECX[10].unused + 4) + -0x150;
  *(int *)((int)&in_ECX[9].unused + *(int *)(in_ECX[10].unused + 8)) =
       *(int *)(in_ECX[10].unused + 8) + -0x158;
  *(int *)((int)&in_ECX[9].unused + *(int *)(in_ECX[10].unused + 0xc)) =
       *(int *)(in_ECX[10].unused + 0xc) + -0x164;
  FUN_00503380(uVar1);
  FUN_005017d0();
  local_8._0_1_ = 4;
  FUN_005017d0();
  local_8._0_1_ = 5;
  in_ECX[0x1b].unused = 0;
  in_ECX[0x1c].unused = 0;
  in_ECX[0x1d].unused = 0;
  in_ECX[0x1e].unused = 0;
  in_ECX[0x1f].unused = 0;
  in_ECX[0x20].unused = 0;
  in_ECX[0x21].unused = 0;
  FUN_00566550();
  local_8._0_1_ = 6;
  FUN_00566550();
  local_8._0_1_ = 7;
  FUN_00566550();
  local_8._0_1_ = 8;
  FUN_00566550();
  local_8._0_1_ = 9;
  FUN_0055a890();
  local_8._0_1_ = 10;
  FUN_0055afb0(in_ECX);
  local_8._0_1_ = 0xb;
  FUN_0058e760();
  local_8._0_1_ = 0xc;
  FUN_005211d0(*param_2);
  *(undefined2 *)&in_ECX[0x3f].unused = 0;
  in_ECX[0x3e].unused = 0;
  *(undefined2 *)&in_ECX[0x41].unused = 0;
  in_ECX[0x40].unused = 0;
  local_8._0_1_ = 0xf;
  in_ECX[0x42].unused = 0;
  in_ECX[0x43].unused = 0;
  FUN_0058ee30(in_ECX);
  local_8._0_1_ = 0x10;
  FUN_0058ed70(in_ECX);
  local_8 = CONCAT31(local_8._1_3_,0x11);
  ATL::CRegKey::CRegKey((CRegKey *)(in_ECX + 0x56),in_ECX);
  in_ECX[0x59].unused = 0;
  in_ECX[0x22].unused = (int)param_2;
  in_ECX[0x16].unused = 0;
  in_ECX[0x53].unused = 0;
  *(undefined2 *)&in_ECX[0x55].unused = 0;
  *(byte *)&in_ECX[0x55].unused = (byte)in_ECX[0x55].unused & 0xfe;
  *(byte *)&in_ECX[0x55].unused = (byte)in_ECX[0x55].unused | 2;
  in_ECX[0x45].unused = 0;
  in_ECX[0x46].unused = 0;
  in_ECX[0x47].unused = 0;
  in_ECX[0x48].unused = 0;
  in_ECX[0x21].unused = 0;
  in_ECX[0x1d].unused = 0;
  in_ECX[0x1e].unused = in_ECX[0x1d].unused;
  in_ECX[0x1f].unused = 0;
  in_ECX[0x20].unused = in_ECX[0x1f].unused;
  in_ECX[0x4d].unused = 0;
  in_ECX[0x4e].unused = 0;
  in_ECX[0x4f].unused = 0;
  in_ECX[0x50].unused = 0;
  in_ECX[0x51].unused = 0;
  in_ECX[0x52].unused = 0;
  *(undefined2 *)&in_ECX[0x12].unused = 0;
  *(undefined2 *)((int)&in_ECX[0x12].unused + 2) = 0;
  in_ECX[0x13].unused = 0;
  *(undefined2 *)&in_ECX[0x14].unused = 0;
  in_ECX[0x15].unused = 1;
  in_ECX[0x1b].unused = 0;
  in_ECX[0x1c].unused = 0;
  in_ECX[0x44].unused = 0;
  ExceptionList = local_10;
  return in_ECX;
}

