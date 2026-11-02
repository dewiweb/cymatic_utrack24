// rea decompile_all
// name: FUN_0042bee8
// address: 0x42bee8
// body: available
// range: 0x42bee8-0x42c02e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0042bee8(void)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  uint uVar7;
  byte local_5;
  uint uVar6;
  
  if (*(short *)(unaff_ESI + 0x9a) != 0) {
    if ((*(byte *)(unaff_ESI + 0x170) & 1) == 0) {
      local_5 = 0x10;
    }
    else {
      local_5 = 8;
    }
    sVar1 = 0;
    uVar3 = 0;
    do {
      uVar7 = (uint)*(ushort *)(*(int *)(unaff_ESI + 0xac) + sVar1 * 2) -
              (uint)*(ushort *)(unaff_ESI + 0xb0);
      if (*(ushort *)(unaff_ESI + 0x98) <= uVar7) {
        uVar7 = *(ushort *)(unaff_ESI + 0x98) - 1;
      }
      uVar5 = uVar3;
      if (uVar3 <= uVar7) {
        uVar4 = uVar3;
        do {
          if ((*(byte *)(*(int *)(unaff_ESI + 0xa8) + uVar4) & local_5) != 0) break;
          uVar4 = uVar4 + 1;
        } while (uVar4 <= uVar7);
        uVar2 = uVar4;
        uVar5 = uVar4;
        if (uVar4 <= uVar7) {
          while (uVar6 = uVar5, uVar5 = uVar6 + 1, uVar5 <= uVar7) {
            if ((*(byte *)(uVar5 + *(int *)(unaff_ESI + 0xa8)) & local_5) != 0) {
              FUN_0042bdd0(uVar2 + 1,uVar6);
              uVar2 = uVar5;
            }
          }
          if (uVar2 == uVar4) {
            FUN_0042bd8c(uVar3);
          }
          else {
            FUN_0042bdd0(uVar2 + 1 & 0xffff,uVar7);
            if (uVar4 != 0) {
              FUN_0042bdd0(uVar3,uVar4 - 1);
            }
          }
        }
      }
      sVar1 = sVar1 + 1;
      uVar3 = uVar5;
    } while (sVar1 < *(short *)(unaff_ESI + 0x9a));
  }
  return;
}

