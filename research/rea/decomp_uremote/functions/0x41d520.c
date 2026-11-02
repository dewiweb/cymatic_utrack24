// rea decompile_all
// name: FUN_0041d520
// address: 0x41d520
// body: available
// range: 0x41d520-0x41d5b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0041d520(void)

{
  undefined4 uVar1;
  int *piVar2;
  int in_EAX;
  int iVar3;
  int *in_ECX;
  int *piVar4;
  int local_8;
  
  uVar1 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX[6]);
  local_8 = *in_ECX;
  if (local_8 != 0) {
    piVar4 = (int *)(in_ECX[2] + 0x2c);
    do {
      piVar2 = (int *)piVar4[-3];
      if (piVar2 != (int *)0x0) {
        if ((piVar4[-7] & 0x200U) == 0) {
          if ((piVar4[-7] & 0x400U) == 0) {
            iVar3 = piVar4[-2] - *piVar2;
            if (iVar3 < 1) {
              iVar3 = thunk_FUN_00401000(iVar3,uVar1);
            }
            else if (iVar3 < piVar2[1]) {
              iVar3 = FUN_0040d230(piVar2[3]);
            }
            else {
              iVar3 = thunk_FUN_00401000(iVar3 - piVar2[1],uVar1);
              iVar3 = iVar3 + piVar2[3];
            }
          }
          else {
            iVar3 = piVar2[3];
          }
          iVar3 = iVar3 + piVar2[2];
        }
        else {
          iVar3 = piVar2[2];
        }
        piVar4[-7] = piVar4[-7] | 0x20;
        *piVar4 = iVar3;
      }
      local_8 = local_8 + -1;
      piVar4 = piVar4 + 0xc;
    } while (local_8 != 0);
  }
  return;
}

