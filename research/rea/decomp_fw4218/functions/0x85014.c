// rea decompile_all
// name: FUN_00085014
// address: 0x85014
// body: available
// range: 0x85014-0x85337 inclusive
// range: 0x85368-0x85503 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00085014(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 uVar9;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  FUN_000f4e84();
  uVar2 = FUN_000f4fc0();
  iVar3 = FUN_0022d260(param_2,u__MultiTrack_00085338);
  if (iVar3 == 0) {
    FUN_000952cc(uVar2);
    iVar3 = FUN_0022e20c();
    if (iVar3 == 0) {
      uVar4 = FUN_000952cc(uVar2);
      uVar5 = FUN_00232084(&local_28,param_2);
      FUN_000bcce4(param_1,uVar5,uVar4,0x38);
      FUN_00232190(&local_28);
      FUN_000952cc(uVar2);
      iVar3 = FUN_0023adb0();
      while( true ) {
        FUN_000952cc(uVar2);
        iVar6 = FUN_0023ad98();
        if (iVar6 == iVar3) break;
        FUN_00070a08(&uStack_30,iVar3);
        if ((char)local_2c == '\b') {
          iVar6 = FUN_000c0518(param_1,&uStack_30);
          if (iVar6 == 0) {
            *(undefined1 *)(iVar3 + 4) = 1;
          }
          else {
            *(undefined1 *)(iVar3 + 4) = 4;
          }
        }
        FUN_00070a68(&uStack_30);
        iVar3 = iVar3 + 8;
      }
    }
    else if (0 < *(int *)(DAT_00085350 + 0x54)) {
      uVar4 = FUN_0023b208(*DAT_00085354,*(undefined4 *)(DAT_00085350 + 0x54));
      iVar3 = FUN_0022d2a0(DAT_00085350,uVar4);
      if (iVar3 != 0) {
        FUN_000952cc(uVar2);
        uVar4 = FUN_0023ad98();
        FUN_000952cc(uVar2);
        uVar5 = FUN_0023adb0();
        FUN_002481b8(uVar5,uVar4,DAT_00085358);
      }
    }
    uVar4 = FUN_000952cc(uVar2);
    *DAT_00085354 = uVar4;
    uVar9 = 1;
  }
  else {
    iVar3 = FUN_000c0a7c(param_1,param_2);
    if (iVar3 == 0) {
      uVar4 = FUN_00232084(&local_28,param_2);
      FUN_000bcce4(param_1,uVar4,DAT_0008535c,2);
      FUN_00232190(&local_28);
      *DAT_00085354 = DAT_0008535c;
      uVar9 = 0;
    }
    else {
      uVar4 = FUN_00232084(&local_28,param_2);
      FUN_000bcce4(param_1,uVar4,DAT_0008535c,8);
      FUN_00232190(&local_28);
      *DAT_00085354 = DAT_0008535c;
      uVar9 = 1;
    }
  }
  *(undefined4 *)(DAT_00085350 + 0x54) = 0;
  *(undefined4 *)(DAT_00085360 + 0x54) = 0;
  iVar3 = FUN_0022e20c(*DAT_00085354);
  if (iVar3 == 0) {
    FUN_00244158(DAT_00085364);
  }
  else {
    FUN_00244158(DAT_00085364);
    local_28 = 0;
    while (uVar7 = FUN_0022e20c(*DAT_00085354), local_28 < uVar7) {
      iVar3 = FUN_0023b208(*DAT_00085354,local_28);
      if (*(char *)(iVar3 + 4) != '\x01') {
        FUN_002443b0(DAT_00085364,&local_28);
      }
      local_28 = local_28 + 1;
    }
    uVar4 = FUN_00244110(DAT_00085364);
    uVar5 = FUN_00244140(DAT_00085364);
    FUN_00245bd8(uVar5,uVar4);
  }
  iVar3 = FUN_0022e24c(*DAT_00085354);
  if ((iVar3 == 0) && (iVar3 = FUN_0022eefc(DAT_00085364), iVar3 == 0)) {
    iVar3 = FUN_0022d174(param_3);
    if (iVar3 == 0) {
      uVar4 = FUN_00084ef0(param_1,param_3);
      *(undefined4 *)(DAT_00085350 + 0x54) = uVar4;
    }
    else {
      *(undefined4 *)(DAT_00085350 + 0x54) = 0;
    }
    uVar4 = FUN_0008264c(param_1,1,uVar9,*(undefined4 *)(DAT_00085350 + 0x54));
    iVar3 = DAT_00085350;
    *(undefined4 *)(DAT_00085350 + 0x54) = uVar4;
    iVar3 = FUN_00083c28(param_1,*(undefined4 *)(iVar3 + 0x54));
    *DAT_00085504 = iVar3;
    if (*(int *)(DAT_00085350 + 0x54) < 0) {
      *(undefined4 *)(DAT_00085360 + 0x54) = 0xffffffff;
    }
    else {
      uVar4 = FUN_0023b208(*DAT_00085354,*(undefined4 *)(DAT_00085350 + 0x54));
      FUN_00070a84(DAT_00085350,uVar4);
      if (*DAT_00085508 == '\x01') {
        uVar7 = FUN_0022eebc(DAT_00085364);
        if (*DAT_00085504 + 1U < uVar7) {
          puVar8 = (undefined4 *)FUN_002444e4(DAT_00085364,*DAT_00085504 + 1);
          *(undefined4 *)(DAT_00085360 + 0x54) = *puVar8;
        }
        else {
          puVar8 = (undefined4 *)FUN_002444e4(DAT_00085364,0);
          *(undefined4 *)(DAT_00085360 + 0x54) = *puVar8;
        }
      }
      else {
        *(int *)(DAT_00085360 + 0x54) = *(int *)(DAT_00085350 + 0x54) + 1;
      }
      uVar4 = FUN_0008264c(param_1,1,uVar9,*(undefined4 *)(DAT_00085360 + 0x54));
      iVar3 = DAT_00085360;
      *(undefined4 *)(DAT_00085360 + 0x54) = uVar4;
      uVar4 = FUN_00083c28(param_1,*(undefined4 *)(iVar3 + 0x54));
      *DAT_0008550c = uVar4;
      FUN_00084608(param_1,*(undefined4 *)(DAT_00085360 + 0x54));
    }
  }
  else {
    *(undefined4 *)(DAT_00085350 + 0x54) = 0xffffffff;
    *(undefined4 *)(DAT_00085360 + 0x54) = 0xffffffff;
  }
  puVar1 = DAT_00085510;
  *DAT_00085510 = uVar9;
  FUN_00092ea0(uVar2,*puVar1);
  FUN_0023223c(DAT_00085514,param_2);
  FUN_0023223c(DAT_00085518,DAT_00085514);
  return;
}

