// rea decompile_all
// name: FUN_004022b0
// address: 0x4022b0
// body: available
// range: 0x4022b0-0x402307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_004022b0(int param_1)

{
  bool bVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  uint uVar4;
  int local_c;
  undefined3 uStack_8;
  undefined1 local_5;
  
  bVar1 = false;
  _uStack_8 = CONCAT13(1,(int3)in_ECX);
  iVar3 = 0;
  uVar4 = 0x30;
  local_c = in_ECX;
  do {
    iVar2 = FUN_0040f9ab(uVar4);
    if (iVar2 != 0) {
      iVar2 = FUN_0040d141(&local_c);
      if (iVar2 == 0) {
        if (bVar1) {
          if (local_c != iVar3) {
            local_5 = 0;
            goto LAB_004022ed;
          }
        }
        else {
          bVar1 = true;
          iVar3 = local_c;
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0x3a);
LAB_004022ed:
  *(undefined1 *)(param_1 + 0x20) = local_5;
  return;
}

