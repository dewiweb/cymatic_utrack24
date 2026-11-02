// rea decompile_all
// name: FUN_00425450
// address: 0x425450
// body: available
// range: 0x425450-0x42557a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00425450(uint param_1)

{
  undefined1 (*pauVar1) [16];
  int iVar2;
  float *in_ECX;
  undefined1 (*in_EDX) [16];
  float fVar4;
  float fVar5;
  undefined1 auVar3 [16];
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  
  iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
  if (1 < iVar2) {
    iVar2 = iVar2 + -1;
    if (((uint)in_EDX & 0xf) == 0) {
      auVar3 = *in_EDX;
      auVar7 = auVar3;
      while (0 < iVar2) {
        auVar3 = minps(auVar3,in_EDX[1]);
        in_EDX = in_EDX + 1;
        iVar2 = iVar2 + -1;
        auVar7 = maxps(auVar7,*in_EDX);
      }
    }
    else {
      auVar3 = *in_EDX;
      auVar7 = auVar3;
      while (0 < iVar2) {
        pauVar1 = in_EDX + 1;
        in_EDX = in_EDX + 1;
        iVar2 = iVar2 + -1;
        auVar3 = minps(auVar3,*pauVar1);
        auVar7 = maxps(auVar7,*pauVar1);
      }
    }
    fVar6 = auVar7._4_4_;
    fVar4 = auVar7._8_4_;
    fVar8 = auVar7._12_4_;
    if (fVar4 <= fVar6) {
      if (fVar8 <= fVar6) {
        fVar8 = fVar6;
      }
    }
    else if (fVar8 <= fVar4) {
      fVar8 = fVar4;
    }
    if (fVar8 <= auVar7._0_4_) {
      fVar8 = auVar7._0_4_;
    }
    fVar4 = auVar3._4_4_;
    fVar5 = auVar3._8_4_;
    fVar6 = auVar3._12_4_;
    if (fVar4 <= fVar5) {
      if (fVar4 <= fVar6) {
        fVar6 = fVar4;
      }
    }
    else if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
    if (auVar3._0_4_ <= fVar6) {
      fVar6 = auVar3._0_4_;
    }
    iVar2 = 0;
    if (fVar8 <= fVar6) {
      fVar8 = fVar6;
    }
    if ((param_1 & 3) != 0) {
      do {
        if (*(float *)(in_EDX[1] + iVar2 * 4) <= fVar6) {
          fVar6 = *(float *)(in_EDX[1] + iVar2 * 4);
        }
        if (fVar8 <= *(float *)(in_EDX[1] + iVar2 * 4)) {
          fVar8 = *(float *)(in_EDX[1] + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
        if (fVar8 <= fVar6) {
          fVar8 = fVar6;
        }
      } while (iVar2 < (int)(param_1 & 3));
    }
    *in_ECX = fVar6;
    in_ECX[1] = fVar8;
    return;
  }
  FUN_00425c00(param_1);
  return;
}

