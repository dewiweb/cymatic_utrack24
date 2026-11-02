// rea decompile_all
// name: FUN_00470e12
// address: 0x470e12
// body: available
// range: 0x470e12-0x470e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00470e12(undefined4 *param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *param_2;
  iVar2 = 0;
  do {
    if (cVar1 == '\0') {
LAB_00470e7b:
      *param_1 = param_2;
      return;
    }
    iVar3 = FUN_0044eba8();
    if ((iVar2 == 0) && (iVar4 = FUN_00470235(param_3,iVar3), -1 < iVar4)) {
      FUN_0046080a();
      goto LAB_00470e7b;
    }
    iVar5 = FUN_00470235(param_4,iVar3);
    iVar4 = iVar2;
    if (((-1 < iVar5) && (iVar4 = iVar3, iVar2 != 0)) && (iVar4 = iVar2, iVar2 == iVar3)) {
      iVar4 = 0;
    }
    cVar1 = *param_2;
    iVar2 = iVar4;
  } while( true );
}

