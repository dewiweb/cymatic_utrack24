// rea decompile_all
// name: FUN_004a0970
// address: 0x4a0970
// body: available
// range: 0x4a0970-0x4a0aee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004a0970(int param_1,float param_2,float param_3,float param_4,float param_5,uint param_6)

{
  float fVar1;
  int iVar2;
  int unaff_EBX;
  int *unaff_ESI;
  int iVar3;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  iVar3 = 0;
  if (unaff_ESI[2] < 1) {
    return;
  }
  if (param_1 < 1) {
    return;
  }
  FUN_004a08e1(unaff_ESI,param_1,'\x01' - ((param_6 & 0x44) != 0));
  if ((param_6 >> 6 & 1) == 0) {
    if ((param_6 >> 2 & 1) != 0) {
      param_2 = (param_4 - local_10) * 0.5 + param_2;
      goto LAB_004a09fb;
    }
    if ((param_6 >> 1 & 1) == 0) goto LAB_004a09fb;
    param_2 = (param_2 + param_4) - (local_10 + local_18);
  }
  else {
LAB_004a09fb:
    param_2 = param_2 - local_18;
  }
  if ((param_6 >> 3 & 1) == 0) {
    if ((param_6 >> 4 & 1) != 0) {
      param_3 = (param_3 + param_5) - (local_c + local_14);
      goto LAB_004a0a45;
    }
    param_3 = (param_5 - local_c) * 0.5 + param_3;
  }
  param_3 = param_3 - local_14;
LAB_004a0a45:
  FUN_004a05fb(param_2,param_3);
  if ((param_6 >> 6 & 1) != 0) {
    local_20 = unaff_EBX * 0x1c;
    iVar2 = 0;
    local_1c = *(float *)(local_20 + 0x10 + *unaff_ESI);
    if (0 < param_1) {
      do {
        fVar1 = *(float *)(local_20 + 0x10 + *unaff_ESI);
        if (local_1c != fVar1) {
          FUN_004a0aef(unaff_ESI,param_4);
          iVar2 = iVar3;
          local_1c = fVar1;
        }
        local_20 = local_20 + 0x1c;
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_1);
      if (iVar2 < iVar3) {
        FUN_004a0aef(unaff_ESI,param_4);
      }
    }
  }
  return;
}

