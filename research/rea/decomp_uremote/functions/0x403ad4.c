// rea decompile_all
// name: FUN_00403ad4
// address: 0x403ad4
// body: available
// range: 0x403ad4-0x403b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00403ad4(int param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  int in_EAX;
  int iVar4;
  ushort *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  piVar1 = (int *)(param_1 * 0x1c + 0x2c + in_EAX);
  pbVar6 = (byte *)piVar1[2];
  pbVar7 = pbVar6 + *piVar1 * 0x30;
  iVar4 = FUN_00402583(param_1);
  if (iVar4 == 0) {
    for (; pbVar6 < pbVar7; pbVar6 = pbVar6 + 0x30) {
      puVar5 = *(ushort **)(pbVar6 + 0x28);
      uVar2 = *puVar5;
      *pbVar6 = *pbVar6 & 0xfe;
      while (uVar3 = uVar2 & 3, puVar5 != *(ushort **)(pbVar6 + 0x2c)) {
        puVar5 = *(ushort **)(puVar5 + 0x10);
        uVar2 = *puVar5;
        if ((uVar3 == 0) && ((uVar2 & 3) == 0)) break;
        if (puVar5 == *(ushort **)(pbVar6 + 0x2c)) {
          *pbVar6 = *pbVar6 | 1;
        }
      }
    }
    iVar4 = 0;
  }
  return iVar4;
}

