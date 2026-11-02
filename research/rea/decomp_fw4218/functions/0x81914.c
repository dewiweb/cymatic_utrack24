// rea decompile_all
// name: FUN_00081914
// address: 0x81914
// body: available
// range: 0x81914-0x81b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00081914(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  FUN_000f4e84();
  uVar1 = FUN_000f4fc0();
  iVar2 = FUN_001b5844(uVar1);
  if (iVar2 == 0) {
    iVar2 = FUN_0022e24c(*DAT_00081b44);
    if (iVar2 == 0) {
      if ((*(int *)(DAT_00081b48 + 0x54) == -1) && (*(int *)(DAT_00081b4c + 0x54) == -1)) {
        return 0;
      }
      if (*DAT_00081b50 == '\x01') {
        *DAT_00081b58 = *DAT_00081b54;
        piVar3 = DAT_00081b54;
        *DAT_00081b54 = *DAT_00081b54 + -1;
        if (*piVar3 < 0) {
          iVar2 = FUN_0022eebc(DAT_00081b5c);
          *DAT_00081b54 = iVar2;
        }
        puVar4 = (undefined4 *)FUN_002444e4(DAT_00081b5c,*DAT_00081b54);
        iVar2 = DAT_00081b48;
        *(undefined4 *)(DAT_00081b48 + 0x54) = *puVar4;
        uVar1 = FUN_0008264c(param_1,0,*DAT_00081b60,*(undefined4 *)(iVar2 + 0x54));
        iVar2 = DAT_00081b48;
        *(undefined4 *)(DAT_00081b48 + 0x54) = uVar1;
        iVar2 = FUN_00083c28(param_1,*(undefined4 *)(iVar2 + 0x54));
        *DAT_00081b54 = iVar2;
        puVar4 = (undefined4 *)FUN_002444e4(DAT_00081b5c,*DAT_00081b58);
        iVar2 = DAT_00081b4c;
        *(undefined4 *)(DAT_00081b4c + 0x54) = *puVar4;
        uVar1 = FUN_0008264c(param_1,1,*DAT_00081b60,*(undefined4 *)(iVar2 + 0x54));
        *(undefined4 *)(DAT_00081b4c + 0x54) = uVar1;
      }
      else {
        iVar2 = FUN_00082954(param_1,*DAT_00081b60,*(undefined4 *)(DAT_00081b48 + 0x54));
        if ((-1 < iVar2) && (iVar2 < *(int *)(DAT_00081b48 + 0x54))) {
          *(undefined4 *)(DAT_00081b4c + 0x54) = *(undefined4 *)(DAT_00081b48 + 0x54);
          *(int *)(DAT_00081b48 + 0x54) = iVar2;
        }
      }
      uVar1 = FUN_0023b208(*DAT_00081b44,*(undefined4 *)(DAT_00081b48 + 0x54));
      FUN_00070a84(DAT_00081b48,uVar1);
      FUN_00084608(param_1,*(undefined4 *)(DAT_00081b4c + 0x54));
      return 1;
    }
  }
  else {
    iVar2 = FUN_00093a08(uVar1);
    piVar3 = (int *)FUN_0023a5e8(iVar2 + 0x30);
    if (*piVar3 != *(int *)*DAT_00081b40) {
      FUN_00093a08(uVar1);
      FUN_0007ec10();
      return 1;
    }
  }
  return 0;
}

