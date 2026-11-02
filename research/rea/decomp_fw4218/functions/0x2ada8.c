// rea decompile_all
// name: FUN_0002ada8
// address: 0x2ada8
// body: available
// range: 0x2ada8-0x2b04f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ada8(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint local_c0 [2];
  undefined2 local_b8;
  undefined1 auStack_b6 [8];
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined2 local_aa;
  undefined1 auStack_a8 [8];
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 auStack_9e [8];
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_90;
  undefined1 *local_8c;
  int local_88;
  int local_74;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [20];
  undefined1 auStack_40 [26];
  byte local_26 [8];
  undefined1 local_1e;
  undefined1 local_1d;
  int *piStack_1c;
  int local_18;
  
  local_74 = *param_1 + 0x40;
  local_90 = *(undefined4 *)(*param_1 + 0xc);
  piStack_1c = param_1;
  local_18 = param_2;
  FUN_0002ab50(param_1,auStack_64,*(undefined4 *)(param_2 + 0x224));
  FUN_0002ab50(param_1,auStack_40,*(undefined4 *)(*param_1 + 0xc),*param_1 + 0x1c);
  local_ae = *(undefined1 *)(*param_1 + 0x44);
  FUN_001c6cec(auStack_b6,*param_1 + 0x4b);
  FUN_001c6cec(auStack_a8,*param_1 + 0x4b);
  FUN_001c6cec(auStack_9e,*param_1 + 0x4b);
  iVar5 = local_18;
  local_a0 = 0;
  local_9f = 0;
  local_96 = 0;
  local_95 = 0;
  local_ac = *(undefined1 *)(*param_1 + 0x46);
  local_ab = *(undefined1 *)(*param_1 + 0x47);
  local_aa = *(undefined2 *)(*param_1 + 0x48);
  local_ad = *(undefined1 *)(*param_1 + 0x4a);
  local_b8 = 0;
  local_8c = auStack_54;
  local_88 = local_18 + 0x20c;
  if (*(byte *)(local_74 + 6) - 1 < 0x7f) {
    iVar4 = FUN_0002abb6(param_1,&local_b8,auStack_64);
    if ((*(char *)(local_74 + 0x14) == '\0') && ((iVar4 == 1 || (iVar4 == 3)))) {
      if (*(char *)(iVar5 + 0x25a) == '\x04') {
        return;
      }
      FUN_00039968(local_c0,0x10);
      uVar3 = _DAT_0002b050;
      iVar5 = FUN_000366e0(_DAT_0002b050);
      if (iVar5 != 0) {
        FUN_0002f9bc(uVar3);
        FUN_0002f9fc(6,s_BMC__update_Method_M1_0002b06c);
      }
LAB_0002aed2:
      FUN_0002b0e4(param_1);
      goto LAB_0002b016;
    }
    FUN_00039968(local_c0,0xf);
    uVar3 = _DAT_0002b050;
    iVar5 = FUN_000366e0(_DAT_0002b050);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s__BMC__update_Method_P1_0002b053 + 1);
    }
  }
  else {
    iVar4 = FUN_0002abb6(param_1,&local_b8,auStack_40);
    if ((*(char *)(local_74 + 0x14) == '\0') && ((iVar4 == 1 || (iVar4 == 3)))) {
      if (*(char *)(iVar5 + 0x25a) == '\x04') {
        return;
      }
      FUN_00039968(local_c0,0x10);
      uVar3 = _DAT_0002b050;
      iVar5 = FUN_000366e0(_DAT_0002b050);
      if (iVar5 != 0) {
        FUN_0002f9bc(uVar3);
        FUN_0002f9fc(6,s_BMC__update_Method_M2_0002b084);
      }
      goto LAB_0002aed2;
    }
    iVar4 = 0;
    do {
      bVar1 = *(byte *)(param_2 + 0x250 + iVar4);
      if (bVar1 < local_26[iVar4]) {
        iVar4 = 1;
LAB_0002af3a:
        if (iVar4 == 0) goto LAB_0002af62;
        goto LAB_0002afd2;
      }
      if (local_26[iVar4] < bVar1) {
        iVar4 = -1;
        goto LAB_0002af3a;
      }
      iVar4 = (iVar4 + 1) * 0x10000 >> 0x10;
    } while (iVar4 < 8);
    uVar2 = CONCAT11(*(undefined1 *)(param_2 + 600),*(undefined1 *)(param_2 + 0x259));
    if ((CONCAT11(local_1e,local_1d) <= uVar2) && (uVar2 <= CONCAT11(local_1e,local_1d))) {
LAB_0002af62:
      FUN_00039968(local_c0,0x11);
      uVar3 = _DAT_0002b050;
      iVar4 = FUN_000366e0(_DAT_0002b050);
      if (iVar4 != 0) {
        FUN_0002f9bc(uVar3);
        FUN_0002f9fc(6,s_BMC__update_Method_S1_0002b09c);
      }
      iVar4 = FUN_0003676c(local_90,*param_1 + 0x60);
      FUN_0002b184(param_1,*(undefined4 *)(*param_1 + 4));
      FUN_0003acbe(local_18,local_c0);
      if ((iVar4 == 0) && (*(char *)(iVar5 + 0x25a) == '\t')) {
        FUN_00039968(local_c0,0x12);
      }
      else {
        if (*(char *)(iVar5 + 0x25a) != '\b') {
          return;
        }
        FUN_00039968(local_c0,10);
      }
      goto LAB_0002b016;
    }
LAB_0002afd2:
    iVar4 = FUN_0002abb6(param_1,auStack_40,auStack_64);
    if ((*(char *)(local_74 + 0x14) == '\0') && (iVar4 != 3)) {
      if (*(char *)(iVar5 + 0x25a) == '\x04') {
        return;
      }
      FUN_00039968(local_c0,0x10);
      uVar3 = _DAT_0002b050;
      local_c0[0] = (uint)*(ushort *)(*param_1 + 0x28);
      iVar5 = FUN_000366e0(_DAT_0002b050);
      if (iVar5 != 0) {
        FUN_0002f9bc(uVar3);
        FUN_0002f9fc(6,s_BMC__update_Method_M3_0002b0b4);
      }
      goto LAB_0002b016;
    }
    FUN_00039968(local_c0,0xf);
    uVar3 = _DAT_0002b050;
    iVar5 = FUN_000366e0(_DAT_0002b050);
    if (iVar5 != 0) {
      FUN_0002f9bc(uVar3);
      FUN_0002f9fc(6,s_BMC__update_Method_P2_0002b0cc);
    }
  }
  FUN_0003b646(local_88,local_8c,10);
LAB_0002b016:
  FUN_0003acbe(local_18,local_c0);
  return;
}

