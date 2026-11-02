// rea decompile_all
// name: FUN_00492240
// address: 0x492240
// body: available
// range: 0x492240-0x49232e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00492240(void)

{
  char cVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  int in_EAX;
  byte *pbVar8;
  int iVar9;
  
  uVar3 = *(ushort *)(in_EAX + 0x104);
  iVar9 = 0;
  bVar6 = false;
  bVar7 = false;
  if ((uVar3 != 0) && (uVar3 != 0)) {
    do {
      cVar1 = *(char *)(*(int *)(in_EAX + 0x168) + iVar9);
      if (cVar1 != -1) {
        if (cVar1 == '\0') {
          bVar7 = true;
        }
        else {
          bVar6 = true;
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < (int)(uint)*(ushort *)(in_EAX + 0x104));
    if (bVar6) goto LAB_004922b6;
  }
  *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xff7fffff;
  *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & 0xffffdfff;
  if (!bVar7) {
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xfffffe7f;
  }
LAB_004922b6:
  uVar4 = *(uint *)(in_EAX + 0x30);
  if (((uVar4 & 0x100) != 0) && ((uVar4 & 0x1000) != 0)) {
    pbVar8 = (byte *)((uint)*(byte *)(in_EAX + 0x11c) * 3 + *(int *)(in_EAX + 0xf8));
    *(ushort *)(in_EAX + 0x11e) = (ushort)*pbVar8;
    bVar2 = pbVar8[2];
    *(ushort *)(in_EAX + 0x120) = (ushort)pbVar8[1];
    *(ushort *)(in_EAX + 0x122) = (ushort)bVar2;
    if (((uVar4 & 0x80000) != 0) && ((uVar4 & 0x2000000) == 0)) {
      iVar9 = 0;
      if (uVar3 != 0) {
        iVar5 = *(int *)(in_EAX + 0x168);
        do {
          *(char *)(iVar5 + iVar9) = -1 - *(char *)(iVar5 + iVar9);
          iVar9 = iVar9 + 1;
        } while (iVar9 < (int)(uint)uVar3);
      }
    }
  }
  return;
}

