// rea decompile_all
// name: FUN_0047f136
// address: 0x47f136
// body: available
// range: 0x47f136-0x47f1ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_0047f136(void)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  byte *pbVar3;
  int unaff_EDI;
  undefined4 local_8;
  
  if (0 < in_EAX) {
    pbVar3 = (byte *)(unaff_EDI + 0x10d);
    do {
      (**(code **)(**(int **)(unaff_EDI + 4) + 0xc))(&local_8,3);
      pbVar3[-1] = local_8._2_1_;
      *pbVar3 = (byte)((uint)local_8 >> 8);
      pbVar3[1] = (byte)local_8;
      pbVar3[2] = 0xff;
      bVar1 = pbVar3[2];
      uVar2 = (uint)bVar1;
      if (uVar2 < 0xff) {
        if (uVar2 == 0) {
          pbVar3[-1] = bVar1;
          *pbVar3 = bVar1;
          pbVar3[1] = bVar1;
        }
        else {
          pbVar3[-1] = (byte)(pbVar3[-1] * uVar2 + 0x7f >> 8);
          *pbVar3 = (byte)(*pbVar3 * uVar2 + 0x7f >> 8);
          pbVar3[1] = (byte)(pbVar3[1] * uVar2 + 0x7f >> 8);
        }
      }
      pbVar3 = pbVar3 + 4;
      in_EAX = in_EAX + -1;
    } while (in_EAX != 0);
  }
  return 1;
}

