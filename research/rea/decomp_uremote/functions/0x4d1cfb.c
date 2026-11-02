// rea decompile_all
// name: FUN_004d1cfb
// address: 0x4d1cfb
// body: available
// range: 0x4d1cfb-0x4d1eac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004d1cfb(int param_1)

{
  char cVar1;
  int *in_EAX;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_20 [16];
  int *local_10;
  int local_c;
  
  local_10 = (int *)thunk_FUN_004c1d58();
  piVar2 = (int *)FUN_004d1edf();
  *in_EAX = *piVar2;
  in_EAX[1] = piVar2[1];
  in_EAX[2] = piVar2[2];
  local_c = piVar2[3];
  in_EAX[3] = local_c;
  cVar1 = FUN_004bf468();
  iVar3 = local_c;
  if (cVar1 != '\0') {
    iVar3 = in_EAX[2];
  }
  local_10 = (int *)((int)local_10 + 0x3c);
  local_c = (**(code **)(*local_10 + 8))(iVar3);
  if (0 < local_c) {
    FUN_004bf468();
    FUN_0045151e();
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    piVar2 = (int *)(**(code **)(*local_10 + 0x10))(local_20,param_1);
    *in_ECX = *piVar2;
    in_ECX[1] = piVar2[1];
    in_ECX[2] = piVar2[2];
    iVar3 = piVar2[3];
    in_ECX[3] = iVar3;
    iVar4 = *(int *)(*(int *)(param_1 + 0xdc) + 0x8c);
    if ((iVar4 == 2) || (iVar4 == 3)) {
      iVar4 = in_EAX[1];
      local_10 = (int *)(iVar3 / 2 + in_ECX[1]);
      if (in_EAX[3] / 2 + iVar4 < (int)local_10) {
        iVar3 = FUN_00440367(iVar4 + in_EAX[3]);
        iVar4 = FUN_00440367(in_EAX[1]);
        in_EAX[1] = iVar4;
        in_EAX[3] = iVar3 - iVar4;
      }
      else {
        iVar3 = FUN_00439b5a(iVar4);
        iVar4 = FUN_00439b5a(0);
        in_EAX[3] = iVar4;
        in_EAX[1] = iVar3;
      }
    }
    else {
      iVar3 = *in_EAX;
      if (in_EAX[2] / 2 + iVar3 < in_ECX[2] / 2 + *in_ECX) {
        iVar3 = FUN_00440367(iVar3 + in_EAX[2]);
        iVar4 = FUN_00440367(*in_EAX);
        *in_EAX = iVar4;
        in_EAX[2] = iVar3 - iVar4;
      }
      else {
        iVar3 = FUN_00439b5a(iVar3);
        iVar4 = FUN_00439b5a(0);
        in_EAX[2] = iVar4;
        *in_EAX = iVar3;
      }
    }
  }
  return;
}

