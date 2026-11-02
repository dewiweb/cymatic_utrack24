// rea decompile_all
// name: FUN_00501170
// address: 0x501170
// body: available
// range: 0x501170-0x5012ba inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00501170(undefined4 param_1)

{
  double dVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  int iVar4;
  uint uVar5;
  undefined1 in_XMM0 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double local_10;
  
  uVar5 = 0;
  local_10 = 0.0;
  iVar4 = *(int *)(in_ECX + 0x374);
  if (0 < iVar4) {
    do {
      if (uVar5 < *(uint *)(in_ECX + 0x374)) {
        piVar2 = *(int **)(*(int *)(in_ECX + 0x36c) + uVar5 * 4);
      }
      else {
        piVar2 = (int *)0x0;
      }
      iVar3 = *piVar2;
      if (iVar3 == 0) {
        iVar4 = piVar2[1];
        if (iVar4 == 0) {
          if ((piVar2[2] == 0) || (iVar4 = *(int *)(piVar2[2] + 0x18), iVar4 == 0)) {
            auVar7._0_12_ = ZEXT812(0);
            auVar7._12_4_ = 0;
          }
          else {
            FUN_006f56f0();
            auVar7._8_8_ = in_XMM0._8_8_;
            auVar7._0_8_ = in_XMM0._0_8_ / (double)iVar4;
          }
        }
        else {
          FUN_006f56f0();
          auVar6._8_4_ = in_XMM0._8_4_;
          auVar6._12_4_ = in_XMM0._12_4_;
          dVar8 = in_XMM0._0_8_ / (double)*(int *)(iVar4 + 0x38);
          dVar1 = *(double *)(iVar4 + 0x88);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = dVar1;
          if ((dVar1 <= 0.0) || (dVar1 <= dVar8)) {
            auVar6._0_8_ = dVar8;
            auVar7 = auVar6;
          }
        }
        iVar4 = *(int *)(in_ECX + 0x374);
      }
      else {
        dVar1 = *(double *)(iVar3 + 0x68);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = dVar1;
        if ((dVar1 <= 0.0) ||
           (dVar1 < *(double *)(iVar3 + 0x38) || dVar1 == *(double *)(iVar3 + 0x38))) {
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (double)*(ulonglong *)(iVar3 + 0x38);
        }
      }
      in_XMM0._8_8_ = auVar7._8_8_;
      in_XMM0._0_8_ = auVar7._0_8_ + local_10;
      if (uVar5 < *(uint *)(in_ECX + 0x374)) {
        iVar3 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar5 * 4);
      }
      else {
        iVar3 = 0;
      }
      local_10 = in_XMM0._0_8_;
      if (*(int *)(iVar3 + 0xc) == 2) {
        if (uVar5 < *(uint *)(in_ECX + 0x374)) {
          iVar3 = *(int *)(*(int *)(in_ECX + 0x36c) + uVar5 * 4);
        }
        else {
          iVar3 = 0;
        }
        in_XMM0._0_8_ = (double)*(int *)(iVar3 + 0x10) + in_XMM0._0_8_;
        in_XMM0._8_8_ = 0;
        local_10 = in_XMM0._0_8_;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar4);
  }
  FUN_005b5190();
  return param_1;
}

