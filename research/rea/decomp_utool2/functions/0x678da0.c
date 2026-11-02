// rea decompile_all
// name: FUN_00678da0
// address: 0x678da0
// body: available
// range: 0x678da0-0x679082 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00678da0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8)

{
  char cVar1;
  int in_EDX;
  float10 fVar2;
  float fVar3;
  float fVar4;
  float in_XMM2_Da;
  float fVar5;
  undefined8 local_1c;
  float local_14;
  undefined8 local_c;
  
  if (((in_EDX != 2) && ((param_5 != param_7 || (param_6 != param_8)))) &&
     ((param_1 != param_3 || (param_2 != param_4)))) {
    cVar1 = FUN_00679090(param_5,param_6,param_7,param_8,(int)&local_1c + 4);
    if (cVar1 != '\0') {
LAB_00678e4f:
      FUN_00682d90();
      return;
    }
    if (in_EDX != 0) {
      fVar2 = (float10)FUN_006f6f4a();
      local_c = (double)fVar2;
      fVar2 = (float10)FUN_006f6f4a();
      local_1c = (double)fVar2;
      local_14 = (float)fVar2;
      FUN_00682d90();
      fVar4 = (float)local_c;
      fVar5 = (float)local_1c;
      fVar3 = fVar4 - fVar5;
      FUN_00411660();
      if (fVar3 <= 0.1) goto LAB_0067906c;
      if (fVar4 + 3.1415927 < fVar5) {
LAB_00678ff0:
        if (fVar4 < fVar5) {
          fVar5 = fVar5 - 6.2831855;
          local_14 = fVar5;
        }
        local_c = (double)CONCAT44(fVar4 - 0.1,(undefined4)local_c);
        if (fVar5 < fVar4 - 0.1) {
          do {
            FUN_004363f0();
            FUN_00436470();
            FUN_00682d90();
            fVar3 = local_c._4_4_ - 0.1;
            local_c = (double)CONCAT44(fVar3,(undefined4)local_c);
          } while (local_14 < fVar3);
        }
      }
      else {
        if (fVar5 < fVar4) {
          if (fVar4 - 3.1415927 <= fVar5) goto LAB_00678ff0;
          if (fVar5 < fVar4) {
            fVar4 = fVar4 - 6.2831855;
          }
        }
        local_c = (double)CONCAT44(fVar4 + 0.1,(undefined4)local_c);
        if (fVar4 + 0.1 < fVar5) {
          do {
            FUN_004363f0();
            FUN_00436470();
            FUN_00682d90();
            fVar3 = local_c._4_4_ + 0.1;
            local_c = (double)CONCAT44(fVar3,(undefined4)local_c);
          } while (fVar3 < (float)local_1c);
        }
      }
      goto LAB_0067906c;
    }
    if ((local_1c._4_4_ < in_XMM2_Da) && (0.0 < local_1c._4_4_)) goto LAB_00678e4f;
  }
  FUN_00682d90();
LAB_0067906c:
  FUN_00682d90();
  return;
}

