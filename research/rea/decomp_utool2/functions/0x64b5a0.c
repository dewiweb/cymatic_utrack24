// rea decompile_all
// name: FUN_0064b5a0
// address: 0x64b5a0
// body: available
// range: 0x64b5a0-0x64b756 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x64b752 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0064b5a0(int param_1)

{
  void *_Memory;
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int in_ECX;
  int in_EDX;
  int *piVar4;
  int *piVar5;
  int local_e8;
  
  uVar2 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  local_e8 = 1;
  if (((in_ECX != 0) && (in_EDX != 0)) && (param_1 != 0)) {
    _Memory = *(void **)(in_EDX + 0xec);
    iVar3 = FUN_00655c60(*(undefined4 *)(in_EDX + 0xf0),1,0x14);
    if (iVar3 != 0) {
      if (_Memory != (void *)0x0) {
        FID_conflict__free(_Memory);
      }
      *(uint *)(in_EDX + 0xe8) = *(uint *)(in_EDX + 0xe8) | 0x200;
      *(int *)(in_EDX + 0xec) = iVar3;
      piVar4 = (int *)(param_1 + 0xc);
      piVar5 = (int *)(iVar3 + *(int *)(in_EDX + 0xf0) * 0x14);
      do {
        *piVar5 = piVar4[-3];
        *(undefined1 *)(piVar5 + 1) = 0;
        uVar1 = FUN_0064b760();
        *(undefined1 *)(piVar5 + 4) = uVar1;
        if (*piVar4 == 0) {
          piVar5[2] = 0;
          piVar5[3] = 0;
LAB_0064b71a:
          piVar5 = piVar5 + 5;
          *(int *)(in_EDX + 0xf0) = *(int *)(in_EDX + 0xf0) + 1;
        }
        else {
          iVar3 = FUN_004c554b(*piVar4);
          piVar5[2] = iVar3;
          if (iVar3 != 0) {
            FUN_004c2c30(iVar3,piVar4[-1],*piVar4);
            piVar5[3] = *piVar4;
            goto LAB_0064b71a;
          }
          if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
            if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) goto LAB_0064b752;
            FUN_006563b0();
          }
          else {
            FUN_00656080("unknown chunk: out of memory");
            FUN_006563b0();
          }
        }
        piVar4 = piVar4 + 5;
        local_e8 = local_e8 + -1;
        if (local_e8 < 1) {
          __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
          return;
        }
      } while( true );
    }
    if ((*(uint *)(in_ECX + 0x28) & 0x8000) == 0) {
      if ((*(uint *)(in_ECX + 0x2c) & 0x400000) == 0) {
LAB_0064b752:
                    /* WARNING: Subroutine does not return */
        FUN_00656590();
      }
    }
    else {
      FUN_00656080("too many unknown chunks");
    }
    FUN_006563b0();
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

