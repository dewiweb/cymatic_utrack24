// rea decompile_all
// name: FUN_004c5563
// address: 0x4c5563
// body: available
// range: 0x4c5563-0x4c5686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_004c5563(float param_1,float param_2)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  float10 fVar7;
  int iStack_10;
  float local_8;
  
  uVar3 = (uint)param_2 >> 0x17 & 0xff;
  uVar4 = (uint)param_1 >> 0x17 & 0xff;
  if ((uVar4 == 0xff) || (uVar3 == 0xff)) {
    fVar5 = ABS(param_1);
    fVar2 = ABS(param_2);
    if (((uVar4 == 0xff) && (((uint)param_1 & 0x7fffff) != 0)) ||
       ((uVar3 == 0xff && (((uint)param_2 & 0x7fffff) != 0)))) {
      fVar1 = fVar2 * fVar5;
    }
    else {
      fVar1 = fVar2 + fVar5;
    }
    if ((uVar4 == 0xff) && (((uint)param_1 & 0x7fffff) == 0)) {
      return (float10)fVar5;
    }
    if ((uVar3 == 0xff) && (((uint)param_2 & 0x7fffff) == 0)) {
      return (float10)fVar2;
    }
    return (float10)fVar1;
  }
  if ((uVar4 - uVar3) + 0x1c < 0x39) {
    if (uVar3 + uVar4 < 0x17b) {
      fVar7 = (float10)FUN_004d7180();
      goto LAB_004c55ef;
    }
    fVar7 = (float10)FUN_004d7180();
    iStack_10 = (int)((ulonglong)(double)fVar7 >> 0x20);
    bVar6 = SBORROW4(iStack_10,0x47f00000);
    iStack_10 = iStack_10 + -0x47f00000;
  }
  else {
    fVar2 = ABS(param_2) * 0.5 + ABS(param_1) * 0.5;
    bVar6 = SBORROW4((int)fVar2,0x7f000000);
    iStack_10 = (int)fVar2 + -0x7f000000;
    fVar7 = (float10)fVar2 + (float10)fVar2;
  }
  if (bVar6 == iStack_10 < 0) {
    local_8 = (float)fVar7;
    ___libm_error_support(&param_1,&param_2,&local_8,0x2f);
    return (float10)local_8;
  }
LAB_004c55ef:
  return (float10)(float)fVar7;
}

