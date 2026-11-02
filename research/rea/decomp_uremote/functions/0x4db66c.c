// rea decompile_all
// name: FUN_004db66c
// address: 0x4db66c
// body: available
// range: 0x4db66c-0x4db984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004db66c(undefined4 param_1,undefined1 *param_2,int param_3,undefined4 param_4,
                 undefined4 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  undefined4 extraout_ECX;
  undefined1 *local_78;
  undefined *local_74;
  undefined *local_70;
  uint uStack_6c;
  undefined1 local_5c [4];
  undefined *local_58;
  undefined1 *local_54;
  undefined1 local_38 [36];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_005d9526;
  local_14 = ExceptionList;
  uStack_6c = DAT_00955fd4 ^ (uint)&stack0xffffff98;
  ExceptionList = &local_14;
  local_70 = (undefined *)0x1;
  local_74 = (undefined *)0x100ad01;
  local_78 = local_5c;
  FUN_004c1e29();
  if (*(char *)*param_5 == '\0') {
    local_70 = (undefined *)0x4db7ac;
    FUN_0047888f();
    local_c = 0;
    local_70 = (undefined *)0x42c80000;
    local_74 = (undefined *)0x42c80000;
    local_78 = (undefined1 *)0x0;
    FUN_00479464(extraout_ECX,0);
    local_70 = (undefined *)0x41600000;
    local_74 = (undefined *)0x42600000;
    local_78 = (undefined1 *)0x422c0000;
    FUN_00478eaa(0x41b00000);
    local_70 = (undefined *)0x41a80000;
    local_74 = (undefined *)0x41600000;
    local_78 = (undefined1 *)0x41b00000;
    FUN_00478eaa(0x422c0000);
    local_70 = (undefined *)0x41a80000;
    local_74 = (undefined *)0x41600000;
    local_78 = (undefined1 *)0x42640000;
    FUN_00478eaa(0x422c0000);
    local_70 = (undefined *)0x4db86d;
    FUN_00478a0d();
    local_70 = (undefined *)0x4db875;
    cVar2 = FUN_004c7c7c();
    uVar1 = _DAT_0095768c;
    if (cVar2 == '\0') {
      local_70 = (undefined *)0x4db886;
      cVar2 = FUN_004c7c89();
      if (cVar2 == '\0') {
        uVar1 = 0x3e99999a;
      }
      else {
        uVar1 = 0x3f000000;
      }
    }
    local_74 = (undefined *)uVar1;
    local_54 = (undefined1 *)&local_70;
    local_78 = (undefined1 *)&local_70;
    local_58 = local_74;
    FUN_0047620f();
    local_74 = (undefined *)0x4db8bf;
    FUN_0047cda7();
    local_54 = (undefined1 *)&local_70;
    local_78 = (undefined1 *)((float)param_3 - 4.0);
    local_74 = (undefined *)0x1;
    local_70 = (undefined *)0x24;
    local_58 = (undefined *)((float)(int)param_2 - 4.0);
    local_70 = (undefined *)FUN_0047a633(0x40000000,0x40000000,local_58);
    local_74 = local_38;
    local_78 = (undefined1 *)0x4db920;
    FUN_0047d2ae();
    local_c = 0xffffffff;
    local_70 = (undefined *)0x4db92e;
    FUN_004f7994();
  }
  else {
    local_70 = (undefined *)0x4db6c3;
    cVar2 = FUN_004c3153();
    if (cVar2 != '\0') {
      local_70 = (undefined *)0x4db6d1;
      cVar2 = FUN_004c7c7c();
      if (cVar2 == '\0') {
        local_70 = (undefined *)0x4db6e2;
        cVar2 = FUN_004c7c89();
        if (cVar2 == '\0') {
          local_74 = (undefined *)0x3da3d70a;
        }
        else {
          local_74 = (undefined *)0x3e19999a;
        }
      }
      else {
        local_74 = (undefined *)0x3e99999a;
      }
      local_54 = (undefined1 *)&local_70;
      local_78 = (undefined1 *)&local_70;
      local_58 = local_74;
      FUN_0047620f();
      local_74 = (undefined *)0x4db716;
      FUN_0047d23a();
      local_70 = (undefined *)0x3e99999a;
      local_74 = (undefined *)0x4db727;
      FUN_0047cdee();
      local_70 = &DAT_0095d950;
      local_74 = &DAT_0095d8b0;
      local_78 = (undefined1 *)0x2;
      FUN_004db985(param_2,param_3);
    }
    local_54 = (undefined1 *)&local_70;
    local_74 = (undefined *)0x4db753;
    FUN_004d076d();
    local_74 = (undefined *)0x4db75a;
    FUN_0047cda7();
    local_70 = (undefined *)((float)param_3 * 0.6);
    local_74 = (undefined *)0x4db776;
    local_58 = local_70;
    FUN_0047ceb8();
    local_70 = (undefined *)0x0;
    local_74 = (undefined *)0x1;
    local_54 = (undefined1 *)&local_78;
    local_78 = (undefined1 *)0x24;
    FUN_0047d12a(3,0,param_2 + -6,param_3);
  }
  local_70 = (undefined *)0x0;
  local_74 = (undefined *)param_4;
  local_78 = (undefined1 *)0x4db938;
  cVar2 = FUN_004c30fb();
  if (cVar2 != '\0') {
    local_54 = (undefined1 *)&local_70;
    local_78 = (undefined1 *)&local_70;
    local_74 = (undefined *)0x3ecccccd;
    FUN_0047620f();
    local_74 = (undefined *)0x4db95e;
    FUN_0047cda7();
    local_70 = (undefined *)0x1;
    local_74 = (undefined *)param_3;
    local_78 = param_2;
    FUN_0047d353(param_1,0);
  }
  ExceptionList = local_14;
  return;
}

