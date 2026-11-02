// rea decompile_all
// name: FUN_005ebfc0
// address: 0x5ebfc0
// body: available
// range: 0x5ebfc0-0x5ec1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_005ebfc0(void)

{
  int iVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int in_ECX;
  uint in_EDX;
  int iVar4;
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  undefined8 uStack_48;
  
  iVar4 = 0;
  iVar1 = in_EDX - 1;
  if (0 < (int)in_EDX) {
    if (1 < in_EDX) {
      uVar3 = in_EDX & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
      }
      uStack_48 = (double)iVar1;
      auVar2._8_4_ = SUB84(uStack_48,0);
      auVar2._0_8_ = (double)iVar1;
      auVar2._12_4_ = (int)((ulonglong)uStack_48 >> 0x20);
      do {
        dVar11 = (double)iVar4;
        dVar12 = (double)(iVar4 + 1);
        auVar8._0_8_ = dVar11 * 6.283185307179586;
        auVar8._8_8_ = dVar12 * 6.283185307179586;
        auVar7._8_4_ = SUB84(uStack_48,0);
        auVar7._0_8_ = (double)iVar1;
        auVar7._12_4_ = (int)((ulonglong)uStack_48 >> 0x20);
        auVar7 = divpd(auVar8,auVar7);
        thunk_FUN_006f5760();
        auVar10._0_8_ = dVar11 * 12.566370614359172;
        auVar10._8_8_ = dVar12 * 12.566370614359172;
        auVar8 = divpd(auVar10,auVar2);
        thunk_FUN_006f5760();
        auVar9._0_8_ = dVar11 * 18.84955592153876;
        auVar9._8_8_ = dVar12 * 18.84955592153876;
        auVar10 = divpd(auVar9,auVar2);
        thunk_FUN_006f5760();
        uStack_48 = auVar2._8_8_;
        *(ulonglong *)(in_ECX + iVar4 * 4) =
             CONCAT44((float)(((0.4020000100135803 - auVar7._8_8_ * 0.49799999594688416) +
                              auVar8._8_8_ * 0.09799999743700027) -
                             auVar10._8_8_ * 0.0010000000474974513),
                      (float)(((0.4020000100135803 - auVar7._0_8_ * 0.49799999594688416) +
                              auVar8._0_8_ * 0.09799999743700027) -
                             auVar10._0_8_ * 0.0010000000474974513));
        iVar4 = iVar4 + 2;
      } while (iVar4 < (int)(in_EDX - uVar3));
    }
    if (iVar4 < (int)in_EDX) {
      dVar11 = (double)iVar1;
      do {
        dVar12 = ((double)iVar4 * 6.283185307179586) / dVar11;
        FUN_006f7d20();
        dVar5 = ((double)iVar4 * 12.566370614359172) / dVar11;
        FUN_006f7d20();
        dVar6 = ((double)iVar4 * 18.84955592153876) / dVar11;
        FUN_006f7d20();
        *(float *)(in_ECX + iVar4 * 4) =
             (float)(((0.4020000100135803 - dVar12 * 0.49799999594688416) +
                     dVar5 * 0.09799999743700027) - dVar6 * 0.0010000000474974513);
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)in_EDX);
    }
  }
  return;
}

