// rea decompile_all
// name: FUN_000524c0
// address: 0x524c0
// body: available
// range: 0x524c0-0x527db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000524c0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 auStack_38 [6];
  undefined2 local_32;
  
  uVar2 = DAT_000527dc;
  FUN_001a0700();
  if (*(char *)(param_1 + 0x59) == '\0') {
    if ((*(char *)(param_1 + 0x5a) != '\0') && (iVar4 = FUN_00052290(param_1), iVar4 == 0)) {
      FUN_001a0d18(uVar2);
      return 0;
    }
    if (*(char *)(param_1 + 0x5b) == '\0') {
      if ((*(uint *)(param_1 + 0x30) & 0xf0) == 0xe0) {
        local_40 = (uint)CONCAT12(1,(undefined2)local_40);
        local_3c = 0x5e;
        local_3b = *(byte *)(param_1 + 0x31) & 0x7f;
        local_3a = *(undefined1 *)(param_1 + 0x32);
        local_39 = *(undefined1 *)(param_1 + 0x33);
      }
      else {
        FUN_0016d910((int)&local_40 + 2);
      }
      uVar5 = FUN_0018a740(1);
      FUN_0016d964(auStack_38,uVar5);
      local_32 = 8;
      uVar6 = 0;
      local_54 = 0;
      iVar4 = *(ushort *)(param_1 + 0x5e) + 0x1c;
      local_58 = CONCAT22((ushort)((uint)iVar4 >> 8) & 0xff | (short)iVar4 * 0x100,
                          CONCAT11(*(char *)(param_1 + 0x2a) << 2,0x45));
      local_50._0_2_ = CONCAT11(0x11,*(undefined1 *)(param_1 + 0x57));
      local_48 = *(undefined4 *)(param_1 + 0x30);
      local_4c = *(undefined4 *)(param_1 + 0x34);
      do {
        iVar4 = *(int *)(param_1 + uVar6 * 4 + 0xc);
        if (iVar4 != 0) {
          *(short *)(iVar4 + 10) = *(short *)(param_1 + 0x5e) + 0x2c;
          FUN_00003628(*(undefined4 *)(iVar4 + 4),&local_40,0x10);
          FUN_00003628(*(int *)(iVar4 + 4) + 0x10,&local_58,0x14);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 3);
    }
    pcVar3 = DAT_000527e0;
    cVar1 = *DAT_000527e0;
    *DAT_000527e0 = cVar1 + '\x01';
    if ((char)(cVar1 + '\x01') == '\0') {
      *pcVar3 = '\x01';
    }
    *(char *)(param_1 + 0x54) = *pcVar3;
    FUN_001da458(param_1 + 0x44,s__by_name__000527e4);
    iVar8 = *(int *)(param_1 + 0x44);
    uVar6 = *(uint *)(iVar8 + -4);
    iVar4 = *(int *)(*(int *)(param_1 + 0x3c) + -4);
    piVar7 = (int *)(param_1 + 0x44);
    if ((*(uint *)(iVar8 + -8) < uVar6 + iVar4) || (1 < *(int *)(iVar8 + -0xc) + 1U)) {
      local_54 = 0;
      local_58 = -iVar4 - 0xf;
      if (local_58 < uVar6) {
        FUN_0010f7cc(8,&DAT_000527f0,&DAT_000527f0);
      }
      local_58 = *(undefined4 *)(*(int *)(param_1 + 0x3c) + -4);
      local_50 = iVar4;
      FUN_001da110(piVar7,*(undefined4 *)(*piVar7 + -4),0);
    }
    else {
      FUN_00003628(iVar8 + uVar6,*(int *)(param_1 + 0x3c),iVar4 + 1);
      *(uint *)(*piVar7 + -4) = uVar6 + iVar4;
    }
    if ((*(uint *)(param_1 + 0x30) & 0xf0) == 0xe0) {
      piVar7 = (int *)FUN_0006a6e4();
      local_58 = DAT_000527f4;
      local_54 = 0;
      local_50 = 0;
      uVar5 = (**(code **)(*piVar7 + 4))
                        (piVar7,*(int *)(param_1 + 0x3c),s__rtsp__tcp__ravenna_session_00052800,
                         s_local__000527f8);
      *(undefined4 *)(param_1 + 0x48) = uVar5;
      local_40 = DAT_0005281c;
      FUN_00152ae8(param_1,&local_40,0);
      uVar5 = FUN_0005508c();
      FUN_00055d44(uVar5,&local_40,param_1 + 0x4c);
      iVar4 = FUN_0019dc00(0x20,0);
      if (iVar4 != 0) {
        FUN_0019daa8(iVar4,param_1 + 0x30,0);
        FUN_0019d660(iVar4);
      }
      FUN_001da44c(&local_40);
    }
    *(undefined1 *)(param_1 + 0x59) = 1;
  }
  FUN_001a0d18(uVar2);
  return 1;
}

