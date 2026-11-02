// rea decompile_all
// name: FUN_000cf1b4
// address: 0xcf1b4
// body: available
// range: 0xcf1b4-0xcf43f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_000cf1b4(int *param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (param_3 == 10) {
    iVar1 = FUN_000767c8(param_4,8);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    (**(code **)(*param_1 + 0x38))(param_1,*(undefined1 *)(param_4 + 4));
  }
  else if (param_3 < 10) {
    if (param_3 == 0) {
      FUN_00076594();
      FUN_000765bc(param_1);
    }
    else if (param_3 == 2) {
      FUN_00076594();
    }
    else {
      if (param_3 != 3) {
        if (param_3 != 6) {
          return 0xffffffff;
        }
        iVar1 = FUN_000767c8(param_4,0x30);
        if (iVar1 != 0) {
          *(int *)(param_4 + 4) = param_1[0x15];
          *(int *)(param_4 + 8) = param_1[0x16];
          *(int *)(param_4 + 0xc) = param_1[0x17];
          *(int *)(param_4 + 0x10) = param_1[0x18];
          *(int *)(param_4 + 0x14) = param_1[0x19];
          *(int *)(param_4 + 0x18) = param_1[0x1a];
          *(undefined4 *)(param_4 + 0x1c) = 0;
          *(int *)(param_4 + 0x20) = param_1[0x1b];
          *(int *)(param_4 + 0x24) = param_1[0x1d];
          *(int *)(param_4 + 0x28) = param_1[0x1e];
          *(int *)(param_4 + 0x2c) = param_1[0x1f];
          return 0;
        }
        return 0xffffffff;
      }
      FUN_000765bc();
    }
  }
  else if (param_3 == 0xb || param_3 == 0xc) {
    iVar1 = FUN_000767c8(param_4,8);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0xc) {
      *(int *)(param_4 + 4) = param_1[0xd];
    }
    else {
      param_1[0xd] = *(int *)(param_4 + 4);
    }
  }
  else {
    if (param_3 != 0x11 && param_3 != 0x12) {
      return 0xffffffff;
    }
    iVar1 = FUN_000767c8(param_4,0x18);
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0x11) {
      param_1[0x21] = *(int *)(param_4 + 0x10);
      param_1[0x22] = *(int *)(param_4 + 0x14);
      *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_4 + 5);
      *(undefined1 *)((int)param_1 + 0x8d) = *(undefined1 *)(param_4 + 6);
      *(undefined1 *)((int)param_1 + 0x8e) = *(undefined1 *)(param_4 + 7);
      *(undefined1 *)((int)param_1 + 0x8f) = *(undefined1 *)(param_4 + 8);
      *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_4 + 9);
      *(undefined1 *)((int)param_1 + 0x91) = *(undefined1 *)(param_4 + 10);
      param_1[9] = *(int *)(param_4 + 0xc);
      *(undefined4 *)(param_1[1] + 4) = 1;
      FUN_0007640c((char)param_1[8]);
      if ((char)param_1[0x20] == '\x01') {
        iVar1 = FUN_000765ec(param_1);
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        FUN_000767e8();
      }
      FUN_00076594(param_1);
      FUN_000765bc(param_1);
      FUN_000cf5d0(param_1);
      FUN_000762f4((char)param_1[8],DAT_000cf440,param_1);
      FUN_000763a8((char)param_1[8]);
      *(undefined4 *)param_1[1] = 1;
    }
    else {
      *(bool *)(param_4 + 4) = (char)param_1[0x20] == '\0';
      *(int *)(param_4 + 0x10) = param_1[0x21];
      *(int *)(param_4 + 0x14) = param_1[0x22];
      *(char *)(param_4 + 5) = (char)param_1[0x23];
      *(undefined1 *)(param_4 + 6) = *(undefined1 *)((int)param_1 + 0x8d);
      *(undefined1 *)(param_4 + 7) = *(undefined1 *)((int)param_1 + 0x8e);
      *(undefined1 *)(param_4 + 8) = *(undefined1 *)((int)param_1 + 0x8f);
      *(char *)(param_4 + 9) = (char)param_1[0x24];
      *(undefined1 *)(param_4 + 10) = *(undefined1 *)((int)param_1 + 0x91);
      *(int *)(param_4 + 0xc) = param_1[9];
    }
  }
  return 0;
}

