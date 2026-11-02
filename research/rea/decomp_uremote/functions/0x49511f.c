// rea decompile_all
// name: FUN_0049511f
// address: 0x49511f
// body: available
// range: 0x49511f-0x49531e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049511f(int param_1,int param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  int in_EAX;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint *unaff_ESI;
  undefined1 *puVar7;
  
  uVar2 = *unaff_ESI;
  if ((char)unaff_ESI[2] == '\x03') {
    bVar1 = *(byte *)((int)unaff_ESI + 9);
    if (bVar1 < 8) {
      if (bVar1 == 1) {
        pbVar4 = (byte *)((uVar2 - 1) + in_EAX);
        iVar3 = 7 - (uVar2 - 1 & 7);
        pbVar5 = (byte *)((uVar2 - 1 >> 3) + in_EAX);
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar4 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 1;
          if (iVar3 == 7) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 1;
          }
          pbVar4 = pbVar4 + -1;
        }
      }
      else if (bVar1 == 2) {
        pbVar4 = (byte *)((uVar2 - 1) + in_EAX);
        iVar3 = (3 - (uVar2 - 1 & 3)) * 2;
        pbVar5 = (byte *)((uVar2 - 1 >> 2) + in_EAX);
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar4 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 3;
          if (iVar3 == 6) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 2;
          }
          pbVar4 = pbVar4 + -1;
        }
      }
      else if (bVar1 == 4) {
        pbVar4 = (byte *)((uVar2 - 1) + in_EAX);
        iVar3 = (uVar2 & 1) << 2;
        pbVar5 = (byte *)((uVar2 - 1 >> 1) + in_EAX);
        for (uVar6 = uVar2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pbVar4 = *pbVar5 >> ((byte)iVar3 & 0x1f) & 0xf;
          if (iVar3 == 4) {
            iVar3 = 0;
            pbVar5 = pbVar5 + -1;
          }
          else {
            iVar3 = iVar3 + 4;
          }
          pbVar4 = pbVar4 + -1;
        }
      }
      *(undefined1 *)((int)unaff_ESI + 9) = 8;
      *(undefined1 *)((int)unaff_ESI + 0xb) = 8;
      unaff_ESI[1] = uVar2;
    }
    if (*(char *)((int)unaff_ESI + 9) == '\b') {
      if (param_3 < 1) {
        uVar6 = uVar2 * 3;
        pbVar4 = (byte *)((uVar2 - 1) + in_EAX);
        puVar7 = (undefined1 *)((uVar6 - 1) + in_EAX);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          *puVar7 = *(undefined1 *)((uint)*pbVar4 * 3 + 2 + param_1);
          puVar7[-1] = *(undefined1 *)((uint)*pbVar4 * 3 + 1 + param_1);
          puVar7[-2] = *(undefined1 *)((uint)*pbVar4 * 3 + param_1);
          puVar7 = puVar7 + -3;
          pbVar4 = pbVar4 + -1;
        }
        *(undefined1 *)((int)unaff_ESI + 0xb) = 0x18;
        unaff_ESI[1] = uVar6;
        *(undefined1 *)(unaff_ESI + 2) = 2;
        *(undefined1 *)((int)unaff_ESI + 10) = 3;
      }
      else {
        uVar6 = uVar2 * 4;
        pbVar4 = (byte *)((uVar2 - 1) + in_EAX);
        puVar7 = (undefined1 *)((uVar6 - 1) + in_EAX);
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          if ((int)(uint)*pbVar4 < param_3) {
            *puVar7 = *(undefined1 *)((uint)*pbVar4 + param_2);
          }
          else {
            *puVar7 = 0xff;
          }
          puVar7[-1] = *(undefined1 *)((uint)*pbVar4 * 3 + 2 + param_1);
          puVar7[-2] = *(undefined1 *)((uint)*pbVar4 * 3 + 1 + param_1);
          puVar7[-3] = *(undefined1 *)((uint)*pbVar4 * 3 + param_1);
          puVar7 = puVar7 + -4;
          pbVar4 = pbVar4 + -1;
        }
        *(undefined1 *)((int)unaff_ESI + 0xb) = 0x20;
        unaff_ESI[1] = uVar6;
        *(undefined1 *)(unaff_ESI + 2) = 6;
        *(undefined1 *)((int)unaff_ESI + 10) = 4;
      }
      *(undefined1 *)((int)unaff_ESI + 9) = 8;
    }
  }
  return;
}

