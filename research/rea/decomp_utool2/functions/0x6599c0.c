// rea decompile_all
// name: FUN_006599c0
// address: 0x6599c0
// body: available
// range: 0x6599c0-0x659aa7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_006599c0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  int *piVar2;
  uint in_EDX;
  int *piVar3;
  uint uVar4;
  int local_10 [3];
  
  local_10[2] = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_10[0] = 0x474e5089;
  local_10[1] = 0xa1a0a0d;
  if (param_1 < 9) {
    if (param_1 == 0) goto LAB_00659a82;
  }
  else {
    param_1 = 8;
  }
  if (in_EDX < 8) {
    uVar4 = 8 - in_EDX;
    if (in_EDX + param_1 < 9) {
      uVar4 = param_1;
    }
    piVar3 = (int *)((int)local_10 + in_EDX);
    piVar2 = (int *)(in_ECX + in_EDX);
    while (uVar1 = uVar4 - 4, 3 < uVar4) {
      if (*piVar2 != *piVar3) goto LAB_00659a36;
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
      uVar4 = uVar1;
    }
    if (uVar1 != 0xfffffffc) {
LAB_00659a36:
      if (((char)*piVar2 != (char)*piVar3) ||
         ((uVar1 != 0xfffffffd &&
          ((*(char *)((int)piVar2 + 1) != *(char *)((int)piVar3 + 1) ||
           ((uVar1 != 0xfffffffe &&
            ((*(char *)((int)piVar2 + 2) != *(char *)((int)piVar3 + 2) ||
             ((uVar1 != 0xffffffff && (*(char *)((int)piVar2 + 3) != *(char *)((int)piVar3 + 3))))))
            ))))))) {
        __security_check_cookie(local_10[2] ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    __security_check_cookie(local_10[2] ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00659a82:
  __security_check_cookie(local_10[2] ^ (uint)&stack0xfffffffc);
  return;
}

