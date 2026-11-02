// rea decompile_all
// name: FUN_0046d3e5
// address: 0x46d3e5
// body: available
// range: 0x46d3e5-0x46d48b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0046d461) */

longlong FUN_0046d3e5(void)

{
  longlong lVar1;
  longlong lVar2;
  DWORD DVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  LARGE_INTEGER local_c;
  
  QueryPerformanceCounter(&local_c);
  DVar3 = timeGetTime();
  uVar4 = __allmul(DVar3,0,DAT_0095d748,DAT_0095d74c);
  lVar5 = __alldiv(uVar4,1000,0);
  lVar5 = lVar5 - CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
  lVar2 = lVar5 - CONCAT44(DAT_0095d754,DAT_0095d750);
  if (lVar2 < 0) {
    lVar2 = CONCAT44(-((int)((ulonglong)lVar2 >> 0x20) + (uint)((int)lVar2 != 0)),-(int)lVar2);
  }
  lVar6 = __allshr();
  lVar1 = CONCAT44(DAT_0095d754,DAT_0095d750);
  if (lVar6 < lVar2) {
    lVar1 = lVar5;
  }
  DAT_0095d754 = (undefined4)((ulonglong)lVar1 >> 0x20);
  DAT_0095d750 = (undefined4)lVar1;
  return lVar1 + CONCAT44(local_c.s.HighPart,local_c.s.LowPart);
}

