// rea decompile_all
// name: FUN_004c24ac
// address: 0x4c24ac
// body: available
// range: 0x4c24ac-0x4c26bc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: __EH_prolog3 replaced with injection: EH_prolog3 */
/* WARNING: Function: __EH_epilog3 replaced with injection: EH_epilog3 */

void FUN_004c24ac(void)

{
  char cVar1;
  int *unaff_EBX;
  int *piVar2;
  
  FUN_004c4e62();
  FUN_004c3456();
  cVar1 = FUN_004c14d9();
  if (cVar1 != '\0') {
    *(byte *)((int)unaff_EBX + 0x6a) = *(byte *)((int)unaff_EBX + 0x6a) | 1;
    FUN_004c2140();
    cVar1 = FUN_004c3462();
    if (cVar1 != '\0') goto LAB_004c26ad;
    cVar1 = FUN_004c14d9();
    if (cVar1 != '\0') {
      FUN_004c4965();
      FUN_00467e6f();
      FUN_00467e6f();
      FUN_004c4937();
      FUN_004d076d();
      FUN_004c6ba4();
      FUN_004c519d();
      FUN_004f8791();
      goto LAB_004c26ad;
    }
  }
  *(byte *)((int)unaff_EBX + 0x6a) = *(byte *)((int)unaff_EBX + 0x6a) & 0xfe;
  piVar2 = unaff_EBX;
  do {
    cVar1 = FUN_004c1528();
    if (cVar1 != '\0') {
      FUN_004c052f();
      cVar1 = FUN_004c3462();
      if (cVar1 != '\0') goto LAB_004c26ad;
    }
    piVar2 = (int *)piVar2[3];
  } while (piVar2 != (int *)0x0);
  if ((*(byte *)(unaff_EBX + 0x1a) & 0x80) == 0) {
    FUN_004c2f1f();
    cVar1 = FUN_004c3462();
    if (cVar1 != '\0') goto LAB_004c26ad;
  }
  if ((*(byte *)((int)unaff_EBX + 0x69) & 8) != 0) {
    FUN_004c1613();
  }
  FUN_004c4965();
  FUN_00467e6f();
  FUN_00467e6f();
  FUN_004c4937();
  FUN_004d076d();
  FUN_004c6ba4();
  (**(code **)(*unaff_EBX + 0x10))();
  cVar1 = FUN_004c3462();
  if (cVar1 == '\0') {
    FUN_004c519d();
    FUN_004f8791();
    FUN_004bf7fe();
  }
LAB_004c26ad:
  FUN_00474d0f();
  return;
}

