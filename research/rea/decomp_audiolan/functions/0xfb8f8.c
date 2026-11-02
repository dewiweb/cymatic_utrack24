// rea decompile_all
// name: FUN_000fb8f8
// address: 0xfb8f8
// body: available
// range: 0xfb8f8-0xfbaa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_000fb8f8(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    return;
  }
  param_1[9] = param_2;
  if (param_1[3] == 0) {
    param_1[3] = param_2;
  }
  uVar1 = (uint)*(ushort *)(param_1 + 0x14);
  if ((uVar1 - 1 < DAT_000fbaa8) && (uVar1 < (uint)(param_2 - param_1[3]))) {
    param_1[3] = param_2;
    *(undefined2 *)(param_1 + 0x14) = 0;
LAB_000fb95c:
    if ((char)param_1[0x13] == '\0') {
      iVar2 = FUN_0017bfc0();
      param_1[0x16] = iVar2 * 1000;
      param_1[0x17] = 0;
      *(undefined1 *)(param_1 + 0x13) = 1;
      param_1[3] = param_2;
      (**(code **)(*param_1 + 0xc))(param_1,0);
      goto LAB_000fb998;
    }
  }
  else {
    if (uVar1 == 0) goto LAB_000fb95c;
LAB_000fb998:
    if ((char)param_1[0x13] == '\0') goto LAB_000fba74;
  }
  if ((param_1[4] != 0) && ((uint)param_1[4] < (uint)(param_2 - param_1[3]))) {
    if (param_1[5] == param_1[6]) {
      if (*(char *)((int)param_1 + 0x4e) == '\0') {
        if (*(char *)((int)param_1 + 0x4d) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4e) = 1;
          (**(code **)(*param_1 + 0x10))(param_1,1,1);
          if (param_1[0x17] != 0 || param_1[0x16] != 0) {
            iVar2 = FUN_0017bfc0();
            uVar1 = param_1[0x16];
            param_1[0x16] = iVar2 * 1000 - uVar1;
            param_1[0x17] = -(param_1[0x17] + (uint)((uint)(iVar2 * 1000) < uVar1));
          }
          *(undefined1 *)((int)param_1 + 0x4d) = 1;
          return;
        }
        return;
      }
    }
    else {
      FUN_000e9624(param_1[0xd],param_1);
      param_1[3] = param_2;
      param_1[4] = param_1[4] + 200;
      param_1[5] = param_1[5] + 1;
      (**(code **)(*param_1 + 0xc))(param_1);
    }
  }
LAB_000fba74:
  if (*(char *)((int)param_1 + 0x4d) == '\0') {
    if ((char)param_1[0x13] == '\0') {
      param_2 = 0;
    }
    else {
      param_2 = param_2 - param_1[3];
    }
                    /* WARNING: Could not recover jumptable at 0x000fbaa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))(param_1,param_2);
    return;
  }
  return;
}

