// rea decompile_all
// name: FUN_004e3bc6
// address: 0x4e3bc6
// body: available
// range: 0x4e3bc6-0x4e3ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

undefined4 * FUN_004e3bc6(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  uint uVar5;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [8];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined1 local_2c [8];
  undefined1 local_24 [8];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  int local_8;
  undefined4 uStack_4;
  
  uStack_4 = 0x68;
  uVar5 = 0;
  local_14 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_8 = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(in_ECX + 0x1c);
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  FUN_0047b2de();
  cVar1 = FUN_0047b2fa();
  do {
    if (cVar1 == '\0') {
      return param_1;
    }
    if (local_78 == 0) {
      local_1c = FUN_005af82d(0x10);
      local_8._0_1_ = 1;
      if (local_1c == 0) {
        uVar3 = 0;
      }
      else {
        FUN_004e396f(local_54,local_74,local_70);
        uVar5 = uVar5 | 1;
        uVar3 = FUN_004e401b();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004f6e80(uVar3);
      if ((uVar5 & 1) != 0) {
        uVar5 = uVar5 & 0xfffffffe;
        FUN_004e2f64();
LAB_004e3e9d:
        FUN_004e2f64();
      }
    }
    else if (local_78 == 1) {
      local_1c = FUN_005af82d(0x10);
      local_8._0_1_ = 2;
      if (local_1c == 0) {
        uVar3 = 0;
      }
      else {
        FUN_004e396f(local_4c,local_74,local_70);
        uVar5 = uVar5 | 2;
        uVar3 = FUN_004e4160();
      }
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_004f6e80(uVar3);
      if ((uVar5 & 2) != 0) {
        uVar5 = uVar5 & 0xfffffffd;
        FUN_004e2f64();
        goto LAB_004e3e9d;
      }
    }
    else if (local_78 == 2) {
      local_1c = FUN_005af82d(0x18);
      local_8._0_1_ = 3;
      if (local_1c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004e396f(local_44,local_6c,local_68);
        local_8 = CONCAT31(local_8._1_3_,4);
        local_14 = uVar5 | 4;
        uVar4 = FUN_004e396f(local_3c,local_74,local_70);
        local_8._0_1_ = 5;
        local_8._1_3_ = 0;
        uVar5 = uVar5 | 0xc;
        local_14 = uVar5;
        uVar3 = FUN_004e4261(local_1c,uVar4,uVar3);
      }
      FUN_004f6e80(uVar3);
      if ((uVar5 & 8) != 0) {
        uVar5 = uVar5 & 0xfffffff7;
        FUN_004e2f64();
        FUN_004e2f64();
      }
      local_8 = 0;
      if ((uVar5 & 4) != 0) {
        uVar5 = uVar5 & 0xfffffffb;
        FUN_004e2f64();
        goto LAB_004e3e9d;
      }
    }
    else if (local_78 == 3) {
      local_1c = FUN_005af82d(0x20);
      local_8._0_1_ = 8;
      if (local_1c == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004e396f(local_34,local_64,local_60);
        local_8 = CONCAT31(local_8._1_3_,9);
        local_14 = uVar5 | 0x10;
        local_18 = FUN_004e396f(local_2c,local_6c,local_68);
        local_8 = 10;
        local_14 = uVar5 | 0x30;
        uVar4 = FUN_004e396f(local_24,local_74,local_70);
        local_8._0_1_ = 0xb;
        local_8._1_3_ = 0;
        uVar5 = uVar5 | 0x70;
        local_14 = uVar5;
        uVar3 = FUN_004e4431(local_1c,uVar4,local_18,uVar3);
      }
      FUN_004f6e80(uVar3);
      if ((uVar5 & 0x40) != 0) {
        uVar5 = uVar5 & 0xffffffbf;
        FUN_004e2f64();
        FUN_004e2f64();
      }
      if ((uVar5 & 0x20) != 0) {
        uVar5 = uVar5 & 0xffffffdf;
        FUN_004e2f64();
        FUN_004e2f64();
      }
      local_8 = 0;
      if ((uVar5 & 0x10) != 0) {
        uVar5 = uVar5 & 0xffffffef;
        FUN_004e2f64();
        goto LAB_004e3e9d;
      }
    }
    else if (local_78 == 4) {
      iVar2 = FUN_005af82d(8);
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_004e40e9();
      }
      FUN_004f6e80(uVar3);
    }
    cVar1 = FUN_0047b2fa();
  } while( true );
}

