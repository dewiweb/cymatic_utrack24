// rea decompile_all
// name: FUN_00467a00
// address: 0x467a00
// body: available
// range: 0x467a00-0x467de4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00467a00(undefined4 *param_1)

{
  void *_Memory;
  char cVar1;
  float *in_ECX;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float in_XMM1_Da;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_34;
  
  if (*in_ECX != in_XMM1_Da) {
    fVar5 = in_ECX[7];
    *in_ECX = in_XMM1_Da;
    fVar2 = in_ECX[8] * in_XMM1_Da + 0.5;
    FUN_00436410();
    fVar3 = in_ECX[7] * in_XMM1_Da + 0.3;
    FUN_00436410();
    fVar3 = fVar3 / in_XMM1_Da;
    fVar4 = in_ECX[6] * in_XMM1_Da + 0.5;
    FUN_00436410();
    fVar6 = in_ECX[7];
    fVar4 = (fVar3 - fVar4 / in_XMM1_Da) / (fVar6 - in_ECX[6]);
    if (0.9 <= fVar4) {
      fVar7 = 1.1;
      if (fVar4 <= 1.1) {
        fVar7 = fVar4;
      }
    }
    else {
      fVar7 = 0.9;
    }
    fVar8 = (fVar2 / in_XMM1_Da - fVar3) / (in_ECX[8] - fVar6);
    fVar4 = 0.9;
    if ((0.9 <= fVar8) && (fVar4 = 1.1, fVar8 <= 1.1)) {
      fVar4 = fVar8;
    }
    in_ECX[1] = fVar5;
    in_ECX[2] = fVar7;
    in_ECX[3] = fVar3 - fVar7 * fVar6;
    in_ECX[4] = fVar4;
    in_ECX[5] = fVar2 / in_XMM1_Da - fVar4 * in_ECX[8];
  }
  fVar5 = 3.0 / in_XMM1_Da + in_ECX[6];
  if (fVar5 < in_ECX[8] || fVar5 == in_ECX[8]) {
    cVar1 = FUN_00679f40();
    while (cVar1 != '\0') {
      switch(local_34) {
      case 0:
        if (in_ECX[1] <= 0.0) {
          FUN_00682e50();
        }
        else {
          FUN_00682e50();
        }
        break;
      case 1:
        if (in_ECX[1] <= 0.0) {
          FUN_00682d90();
        }
        else {
          FUN_00682d90();
        }
        break;
      case 2:
        if (in_ECX[1] <= 0.0) {
          fVar5 = in_ECX[4] * 0.0 + in_ECX[5];
        }
        else {
          fVar5 = in_ECX[2] * 0.0 + in_ECX[3];
        }
        FUN_0067c1c0(fVar5);
        break;
      case 3:
        if (in_ECX[1] <= 0.0) {
          fVar6 = in_ECX[4] * 0.0 + in_ECX[5];
          fVar5 = in_ECX[4] * 0.0 + in_ECX[5];
        }
        else {
          fVar6 = in_ECX[2] * 0.0 + in_ECX[3];
          fVar5 = in_ECX[2] * 0.0 + in_ECX[3];
        }
        FUN_0067c020(fVar5,0,fVar6);
        break;
      case 4:
        FUN_006804a0();
      }
      cVar1 = FUN_00679f40();
    }
    _Memory = (void *)*param_1;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    FID_conflict__free(_Memory);
  }
  return;
}

