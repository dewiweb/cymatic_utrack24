// rea decompile_all
// name: FUN_00145adc
// address: 0x145adc
// body: available
// range: 0x145adc-0x145bdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x145bd8 to 0x1179d0 FUN_001179d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00145adc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  FUN_001179e0();
  piVar4 = (int *)(param_1 + 0x10c);
  if (param_2 == 0) {
    *(undefined2 *)(param_1 + 0x110) = 0;
    if (*piVar4 != 0) {
      FUN_0016d744();
    }
    *piVar4 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(param_1 + 0x110);
    iVar1 = -1;
    iVar3 = 0;
    if (uVar2 == 0) {
LAB_00145b44:
      iVar1 = FUN_0016d774(uVar2 * 4 + 4,DAT_00145bdc);
      if (iVar1 != 0) {
        if (*piVar4 != 0) {
          FUN_000037d0(iVar1,*piVar4,(uint)*(ushort *)(param_1 + 0x110) << 2);
          FUN_0016d744(*piVar4);
        }
        *piVar4 = iVar1;
        *(int *)(iVar1 + (uint)*(ushort *)(param_1 + 0x110) * 4) = param_2;
        *(short *)(param_1 + 0x110) = *(short *)(param_1 + 0x110) + 1;
      }
    }
    else {
      do {
        iVar5 = *(int *)(*piVar4 + iVar3 * 4);
        if (iVar5 == param_2) goto LAB_00145b98;
        if ((iVar1 < 0) && (iVar5 == 0)) {
          iVar1 = iVar3;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)uVar2);
      if (iVar1 < 0) goto LAB_00145b44;
      *(int *)(*piVar4 + iVar1 * 4) = param_2;
    }
LAB_00145b98:
    if (param_2 != 0) {
      uVar2 = *(uint *)(param_1 + 0x68) | 0x8000;
      goto LAB_00145bcc;
    }
  }
  uVar2 = *(uint *)(param_1 + 0x68) & 0xffff7fff;
LAB_00145bcc:
  *(uint *)(param_1 + 0x68) = uVar2;
  FUN_001179d0(param_1);
  return;
}

