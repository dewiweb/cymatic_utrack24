// rea decompile_all
// name: FUN_0041c1cc
// address: 0x41c1cc
// body: available
// range: 0x41c1cc-0x41c352 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041c1cc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *unaff_EDI;
  bool bVar7;
  uint local_8;
  
  iVar1 = unaff_EDI[0x204] * 8;
  if (param_1 < 0x20c49ba) {
    bVar7 = SBORROW4(param_1 * 0x7d,iVar1);
    iVar1 = param_1 * 0x7d + unaff_EDI[0x204] * -8;
  }
  else {
    iVar1 = iVar1 / 0x7d;
    bVar7 = SBORROW4(param_1,iVar1);
    iVar1 = param_1 - iVar1;
  }
  iVar3 = unaff_EDI[0x205];
  *(bool *)(unaff_EDI + 0x208) = bVar7 != iVar1 < 0;
  while ((0 < iVar3 && (iVar1 = thunk_FUN_00401000(iVar3,param_1), 0x20 < iVar1))) {
    iVar3 = iVar3 + -1;
  }
  local_8 = 0;
  unaff_EDI[0x206] = iVar3;
  do {
    piVar2 = unaff_EDI;
    if (local_8 != 0) {
      if (local_8 == 1) {
        piVar2 = unaff_EDI + 0x81;
      }
      else if (local_8 == 2) {
        piVar2 = unaff_EDI + 0x102;
      }
      else {
        piVar2 = unaff_EDI + 0x183;
      }
    }
    piVar4 = piVar2 + 1;
    for (iVar1 = *piVar2; iVar1 != 0; iVar1 = iVar1 + -1) {
      iVar3 = thunk_FUN_00401000(piVar4[2],param_1);
      piVar4[7] = iVar3 + param_2;
      iVar3 = thunk_FUN_00401000(piVar4[3],param_1);
      piVar4[6] = iVar3 + param_2;
      iVar3 = thunk_FUN_00401000(*piVar4,param_1);
      piVar4[4] = iVar3 + param_2;
      iVar3 = thunk_FUN_00401000(piVar4[1],param_1);
      piVar4[5] = iVar3;
      piVar4[4] = piVar4[4] + 0x20U & 0xffffffc0;
      piVar4 = piVar4 + 8;
    }
    local_8 = local_8 + 1;
  } while (local_8 < 4);
  local_8 = 0;
  do {
    if (local_8 == 0) {
      piVar2 = unaff_EDI + 0x102;
      piVar4 = unaff_EDI;
    }
    else {
      piVar2 = unaff_EDI + 0x183;
      piVar4 = unaff_EDI + 0x81;
    }
    piVar6 = piVar4 + 1;
    for (iVar1 = *piVar4; iVar1 != 0; iVar1 = iVar1 + -1) {
      piVar4 = piVar2 + 1;
      for (iVar3 = *piVar2; iVar3 != 0; iVar3 = iVar3 + -1) {
        iVar5 = *piVar6 - *piVar4;
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
        iVar5 = thunk_FUN_00401000(iVar5,param_1);
        if (iVar5 < 0x40) {
          piVar6[7] = piVar4[7];
          piVar6[6] = piVar4[6];
          piVar6[4] = piVar4[4];
          piVar6[5] = piVar4[5];
          break;
        }
        piVar4 = piVar4 + 8;
      }
      piVar6 = piVar6 + 8;
    }
    local_8 = local_8 + 1;
    if (1 < local_8) {
      return;
    }
  } while( true );
}

