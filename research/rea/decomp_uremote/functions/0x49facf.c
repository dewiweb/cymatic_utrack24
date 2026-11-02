// rea decompile_all
// name: FUN_0049facf
// address: 0x49facf
// body: available
// range: 0x49facf-0x49fb4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0049facf(undefined4 param_1,int param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int *in_EAX;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  
  piVar5 = (int *)FUN_0049f7d4();
  (**(code **)(*piVar5 + 0x18))(param_1,param_2);
  iVar2 = in_EAX[2];
  if (0 < iVar2) {
    iVar6 = *in_ECX;
    iVar3 = *in_EAX;
    fVar4 = *(float *)(iVar6 + 0x18) * *(float *)(iVar6 + 0x14);
    if (*(float *)(iVar6 + 0x1c) == 0.0) {
      iVar6 = 0;
      if (0 < iVar2) {
        do {
          *(float *)(iVar3 + iVar6 * 4) = *(float *)(iVar3 + iVar6 * 4) * fVar4;
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar2);
      }
    }
    else {
      param_2 = 0;
      if (0 < iVar2) {
        do {
          iVar6 = param_2 + 1;
          pfVar1 = (float *)(iVar3 + param_2 * 4);
          *pfVar1 = (*(float *)(*in_ECX + 0x1c) * (float)param_2 + *pfVar1) * fVar4;
          param_2 = iVar6;
        } while (iVar6 < iVar2);
      }
    }
  }
  return;
}

