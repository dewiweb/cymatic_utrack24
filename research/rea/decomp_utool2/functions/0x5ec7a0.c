// rea decompile_all
// name: FUN_005ec7a0
// address: 0x5ec7a0
// body: available
// range: 0x5ec7a0-0x5ec8a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ec7a0(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  int in_ECX;
  int iVar3;
  uint in_EDX;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  
  iVar1 = in_EDX - 1;
  iVar3 = 0;
  dVar10 = (double)iVar1 * 0.5;
  uVar11 = (undefined4)((ulonglong)dVar10 >> 0x20);
  if (-1 < iVar1) {
    if (3 < in_EDX) {
      uVar4 = in_EDX & 0x80000003;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
      }
      do {
        auVar5._0_8_ = (double)iVar3 - dVar10;
        auVar5._8_8_ = (double)(iVar3 + 1) - dVar10;
        auVar6._8_4_ = SUB84(dVar10,0);
        auVar6._0_8_ = dVar10;
        auVar6._12_4_ = uVar11;
        auVar6 = divpd(auVar5,auVar6);
        dVar8 = 1.0 - auVar6._0_8_ * auVar6._0_8_;
        dVar9 = 1.0 - auVar6._8_8_ * auVar6._8_8_;
        *(ulonglong *)(in_ECX + iVar3 * 4) = CONCAT44((float)(dVar9 * dVar9),(float)(dVar8 * dVar8))
        ;
        auVar7._0_8_ = (double)(iVar3 + 2) - dVar10;
        auVar7._8_8_ = (double)(iVar3 + 3) - dVar10;
        auVar2._8_4_ = SUB84(dVar10,0);
        auVar2._0_8_ = dVar10;
        auVar2._12_4_ = uVar11;
        auVar6 = divpd(auVar7,auVar2);
        dVar8 = 1.0 - auVar6._0_8_ * auVar6._0_8_;
        dVar9 = 1.0 - auVar6._8_8_ * auVar6._8_8_;
        *(ulonglong *)(in_ECX + 8 + iVar3 * 4) =
             CONCAT44((float)(dVar9 * dVar9),(float)(dVar8 * dVar8));
        iVar3 = iVar3 + 4;
      } while (iVar3 <= (int)(iVar1 - uVar4));
    }
    for (; iVar3 <= iVar1; iVar3 = iVar3 + 1) {
      dVar8 = ((double)iVar3 - dVar10) / dVar10;
      dVar8 = 1.0 - dVar8 * dVar8;
      *(float *)(in_ECX + iVar3 * 4) = (float)(dVar8 * dVar8);
    }
  }
  return;
}

