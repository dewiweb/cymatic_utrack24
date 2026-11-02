// rea decompile_all
// name: FUN_0048da5f
// address: 0x48da5f
// body: available
// range: 0x48da5f-0x48db76 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_0048da5f(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  int local_c;
  int local_8;
  
  local_8 = 1;
  if (1 < param_3) {
    local_c = 2;
    piVar5 = (int *)(param_2 + 0x2c);
    do {
      if (param_3 < local_c) {
        piVar1 = (int *)FUN_0048d703();
      }
      else {
        piVar1 = (int *)FUN_0048d6da();
      }
      if (piVar1 == (int *)0x0) {
        return local_8;
      }
      piVar5[-2] = piVar1[1];
      *piVar5 = piVar1[3];
      piVar5[2] = piVar1[5];
      piVar5[-3] = *piVar1;
      piVar5[-1] = piVar1[2];
      piVar5[1] = piVar1[4];
      iVar2 = (piVar1[3] - piVar1[2]) * 0xc;
      iVar3 = (piVar1[1] - *piVar1) * 0x10;
      cVar4 = iVar3 <= iVar2;
      if (!(bool)cVar4) {
        iVar2 = iVar3;
      }
      if (iVar2 < (piVar1[5] - piVar1[4]) * 8) {
        cVar4 = '\x02';
      }
      if (cVar4 == '\0') {
        iVar2 = (piVar1[1] + *piVar1) / 2;
        piVar1[1] = iVar2;
        piVar5[-3] = iVar2 + 1;
      }
      else if (cVar4 == '\x01') {
        iVar2 = (piVar1[3] + piVar1[2]) / 2;
        piVar1[3] = iVar2;
        piVar5[-1] = iVar2 + 1;
      }
      else if (cVar4 == '\x02') {
        iVar2 = (piVar1[5] + piVar1[4]) / 2;
        piVar1[5] = iVar2;
        piVar5[1] = iVar2 + 1;
      }
      FUN_0048d726();
      FUN_0048d726();
      local_8 = local_8 + 1;
      local_c = local_c + 2;
      piVar5 = piVar5 + 8;
    } while (local_8 < param_3);
  }
  return local_8;
}

