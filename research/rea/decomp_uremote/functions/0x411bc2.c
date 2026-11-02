// rea decompile_all
// name: FUN_00411bc2
// address: 0x411bc2
// body: available
// range: 0x411bc2-0x411c71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_00411bc2(int *param_1)

{
  void *_Dst;
  int iVar1;
  int *unaff_EBX;
  int *piVar2;
  size_t _Size;
  int *piVar3;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = param_1[2];
  if (param_1 == unaff_EBX) {
    return 0;
  }
  if (param_1[3] == 0) {
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *unaff_EBX = *param_1;
      param_1 = param_1 + 1;
      unaff_EBX = unaff_EBX + 1;
    }
    return 0;
  }
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  _Size = *param_1 * iVar1;
  if (unaff_EBX[3] == 0) {
    iVar1 = FUN_0041194c(_Size,&local_8);
  }
  else {
    local_c = unaff_EBX[2];
    if (local_c < 0) {
      local_c = -local_c;
    }
    if (*unaff_EBX * local_c - _Size == 0) goto LAB_00411c4d;
    iVar1 = FUN_004119c8(*unaff_EBX * local_c,&local_8);
  }
  unaff_EBX[3] = iVar1;
  if (local_8 != 0) {
    return local_8;
  }
LAB_00411c4d:
  _Dst = (void *)unaff_EBX[3];
  piVar2 = param_1;
  piVar3 = unaff_EBX;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = *piVar2;
    piVar2 = piVar2 + 1;
    piVar3 = piVar3 + 1;
  }
  unaff_EBX[3] = (int)_Dst;
  _memcpy(_Dst,(void *)param_1[3],_Size);
  return local_8;
}

