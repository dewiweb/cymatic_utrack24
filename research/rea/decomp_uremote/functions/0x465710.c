// rea decompile_all
// name: FUN_00465710
// address: 0x465710
// body: available
// range: 0x465710-0x46580d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00465799) */

void FUN_00465710(int param_1,int param_2,int *param_3,double param_4)

{
  int in_EAX;
  int iVar1;
  char extraout_CL;
  char *pcVar2;
  float10 fVar3;
  longlong lVar4;
  undefined1 local_4c [60];
  undefined8 local_10;
  
  if (((5 < param_2 - 1U) || (param_4 <= -1e+20)) || (1e+20 <= param_4)) {
    FUN_004655d9(local_4c);
    iVar1 = FUN_00465646(local_4c,param_2,SUB84(param_4,0),(int)((ulonglong)param_4 >> 0x20));
    *param_3 = iVar1;
    ~basic_streambuf<>();
  }
  else {
    fVar3 = (float10)FUN_0047014b(0,0x40240000,param_2);
    local_10 = (double)fVar3;
    _fabs(param_4);
    lVar4 = FUN_005b3fe6();
    pcVar2 = (char *)(in_EAX + param_1 + -1);
    *pcVar2 = '\0';
    while ((-1 < param_2 || (0 < lVar4))) {
      if (param_2 == 0) {
        pcVar2 = pcVar2 + -1;
        *pcVar2 = '.';
      }
      pcVar2 = pcVar2 + -1;
      lVar4 = __alldvrm(lVar4,10,0);
      local_10 = (double)CONCAT44(param_2,(undefined4)local_10);
      *pcVar2 = extraout_CL + '0';
      param_2 = param_2 + -1;
    }
    if (param_4 < 0.0) {
      pcVar2 = pcVar2 + -1;
      *pcVar2 = '-';
    }
    *param_3 = ((in_EAX + param_1) - (int)pcVar2) + -1;
  }
  return;
}

