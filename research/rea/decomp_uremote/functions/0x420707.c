// rea decompile_all
// name: FUN_00420707
// address: 0x420707
// body: available
// range: 0x420707-0x420766 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00420707(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 2),*(undefined1 *)(param_1 + 3));
  if ((uVar3 + param_1 <= *(uint *)(param_2 + 4)) && (0x105 < uVar3)) {
    if (0 < *(int *)(param_2 + 8)) {
      pbVar2 = (byte *)(param_1 + 6);
      uVar3 = 0;
      do {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        if (*(uint *)(param_2 + 0x50) <= (uint)bVar1) goto LAB_0042075d;
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x100);
    }
    return 0;
  }
LAB_0042075d:
  do {
    FUN_0040d9d1();
  } while( true );
}

