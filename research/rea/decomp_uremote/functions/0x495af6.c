// rea decompile_all
// name: FUN_00495af6
// address: 0x495af6
// body: available
// range: 0x495af6-0x495b74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_00495af6(void)

{
  bool bVar1;
  int unaff_ESI;
  undefined4 local_8;
  
  bVar1 = true;
  if ((*(uint *)(unaff_ESI + 0xd0) & 0x20000000) == 0) {
    if ((*(uint *)(unaff_ESI + 0x2c) & 0x800) == 0) goto LAB_00495b25;
  }
  else if ((*(uint *)(unaff_ESI + 0x2c) & 0x300) != 0x300) goto LAB_00495b25;
  bVar1 = false;
LAB_00495b25:
  *(undefined4 *)(unaff_ESI + 0x26c) = 0x81;
  FUN_00492117(&local_8,4);
  if (!bVar1) {
    return false;
  }
  return CONCAT31(CONCAT21(CONCAT11((undefined1)local_8,local_8._1_1_),local_8._2_1_),local_8._3_1_)
         != *(int *)(unaff_ESI + 0xf4);
}

