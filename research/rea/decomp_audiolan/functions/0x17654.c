// rea decompile_all
// name: FUN_00017654
// address: 0x17654
// body: available
// range: 0x17654-0x17747 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: dc47711df08874f4cf3d1d83bbc653d5d7e81a6923a356173f8ed1dbb4060c20
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x17744 to 0x73d7c FUN_00073d7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Headerless raw-binary analysis uses the caller-supplied architecture and entry address; file offset 0 is mapped at that address. Headers are not discovered from file bytes.; Little-endian generic Ghidra languages are used for x86, x86_64, arm, arm64, and NMOS 6502; m68k uses the big-endian 68000 default language, which decodes the 68040 superset. Big-endian ARM, Thumb-only, Cortex-M, 65C02, 65816, separate 68020/68030/CPU32/ColdFire variants, and other processor variants are unsupported in this increment.; Static analysis does not emulate reset vectors, memory-mapped I/O, or firmware boot sequences.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00017654(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  piVar2 = DAT_000177f4;
  cVar1 = *(char *)(param_1 + 0x24);
  iVar3 = *DAT_000177f4;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x20);
  }
  else {
    if (cVar1 == '\x01') {
      if (*(int *)(param_1 + 0x1c) < 0x10) {
        puVar4 = (uint *)(*DAT_000177f4 + *(int *)(param_1 + 0x1c) * 4 + 0x3000);
        *puVar4 = *puVar4 & 0xfffff7ff;
        *(int *)(iVar3 + 0x3104) = 1 << (*(uint *)(param_1 + 0x1c) & 0xff);
      }
      goto LAB_0001773c;
    }
    if (cVar1 != '\x02') {
      if (cVar1 != '\x03') {
        return;
      }
      goto LAB_0001773c;
    }
    if (*(int *)(param_1 + 0x1c) < 0x10) {
      puVar4 = (uint *)(*DAT_000177f4 + *(int *)(param_1 + 0x1c) * 4 + 0x3000);
      *puVar4 = *puVar4 & 0xfffff7ff;
      *(int *)(iVar3 + 0x3104) = 1 << (*(uint *)(param_1 + 0x1c) & 0xff);
    }
    iVar5 = *(int *)(param_1 + 0x20);
  }
  if (iVar5 < 0x10) {
    puVar4 = (uint *)(*piVar2 + iVar5 * 4 + 0x3000);
    *puVar4 = *puVar4 & 0xfffff7ff;
    *(int *)(iVar3 + 0x3104) = 1 << (*(uint *)(param_1 + 0x20) & 0xff);
  }
LAB_0001773c:
  FUN_00073d7c(*(undefined4 *)(param_1 + 4));
  return;
}

