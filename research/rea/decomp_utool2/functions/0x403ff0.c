// rea decompile_all
// name: FUN_00403ff0
// address: 0x403ff0
// body: available
// range: 0x403ff0-0x4042bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00403ff0(int param_1,double *param_2,undefined4 param_3,undefined4 param_4,double param_5)

{
  double *in_ECX;
  double dVar1;
  double dVar2;
  double dVar3;
  
  in_ECX[2] = param_5;
  if (param_1 == 0) {
    if ((char)param_4 == '\0') {
      dVar1 = 3.141592653589793 / *in_ECX;
      dVar2 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * dVar1) + dVar1 * param_5;
      dVar3 = dVar2;
      FUN_006f9250();
      in_ECX[0xc] = dVar3;
      dVar2 = dVar2 - dVar1;
      FUN_006f9250();
      in_ECX[0xd] = dVar2;
      FUN_006f7d20();
      in_ECX[0xe] = dVar1 * 2.0;
      dVar1 = 6.283185307179586 / *in_ECX;
      dVar2 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * dVar1) + dVar1 * in_ECX[2]
      ;
      dVar3 = dVar2;
      FUN_006f9250();
      in_ECX[0xf] = dVar3;
      dVar2 = dVar2 - dVar1;
      FUN_006f9250();
      in_ECX[0x10] = dVar2;
      FUN_006f7d20();
      in_ECX[0x11] = dVar1 * 2.0;
      param_5 = 9.42477796076938 / *in_ECX;
      dVar3 = (1.5707963267948966 - (double)*(int *)((int)in_ECX + 0xc) * param_5) +
              param_5 * in_ECX[2];
      dVar2 = dVar3;
      FUN_006f9250();
      in_ECX[0x12] = dVar2;
      dVar3 = dVar3 - param_5;
    }
    else {
      dVar1 = 3.141592653589793 / *in_ECX;
      dVar3 = 1.5707963267948966;
      FUN_006f9250();
      in_ECX[0xc] = dVar3;
      dVar2 = 1.5707963267948966 - dVar1;
      FUN_006f9250();
      in_ECX[0xd] = dVar2;
      FUN_006f7d20();
      in_ECX[0xe] = dVar1 * 2.0;
      dVar1 = 6.283185307179586 / *in_ECX;
      in_ECX[0xf] = dVar3;
      dVar2 = 1.5707963267948966 - dVar1;
      FUN_006f9250();
      in_ECX[0x10] = dVar2;
      FUN_006f7d20();
      in_ECX[0x11] = dVar1 * 2.0;
      param_5 = 9.42477796076938 / *in_ECX;
      in_ECX[0x12] = dVar3;
      dVar3 = 1.5707963267948966 - param_5;
    }
    FUN_006f9250();
    in_ECX[0x13] = dVar3;
    FUN_006f7d20();
    in_ECX[0x14] = param_5 * 2.0;
    if (((char)param_3 != '\0') && (param_2 != (double *)0x0)) {
      in_ECX[4] = *param_2;
      return;
    }
    in_ECX[4] = -1.0;
    return;
  }
  if (param_1 == 1) {
    FUN_00403a20(param_2,param_3,param_4);
    return;
  }
  if (param_1 == 2) {
    FUN_00403b00(param_2,param_3,param_4);
    return;
  }
  FUN_00403bc0(param_2,param_4);
  return;
}

