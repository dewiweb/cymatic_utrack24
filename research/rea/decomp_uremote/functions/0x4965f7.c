// rea decompile_all
// name: FUN_004965f7
// address: 0x4965f7
// body: available
// range: 0x4965f7-0x496a74 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x496634 to 0x491122 FUN_00491122 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00496745) */
/* WARNING: Removing unreachable block (ram,0x0049678c) */
/* WARNING: Removing unreachable block (ram,0x004967ac) */
/* WARNING: Removing unreachable block (ram,0x004969da) */
/* WARNING: Removing unreachable block (ram,0x004967f5) */
/* WARNING: Removing unreachable block (ram,0x004969cb) */
/* WARNING: Removing unreachable block (ram,0x00496844) */
/* WARNING: Removing unreachable block (ram,0x004969e4) */
/* WARNING: Removing unreachable block (ram,0x0049686b) */
/* WARNING: Removing unreachable block (ram,0x004968af) */
/* WARNING: Removing unreachable block (ram,0x004968b8) */
/* WARNING: Removing unreachable block (ram,0x004969d6) */
/* WARNING: Removing unreachable block (ram,0x004968c7) */
/* WARNING: Removing unreachable block (ram,0x004969b0) */
/* WARNING: Removing unreachable block (ram,0x004969c0) */
/* WARNING: Removing unreachable block (ram,0x004969b4) */
/* WARNING: Removing unreachable block (ram,0x004968d3) */
/* WARNING: Removing unreachable block (ram,0x004968d8) */
/* WARNING: Removing unreachable block (ram,0x004968e4) */
/* WARNING: Removing unreachable block (ram,0x0049691b) */
/* WARNING: Removing unreachable block (ram,0x0049697b) */
/* WARNING: Removing unreachable block (ram,0x00496940) */
/* WARNING: Removing unreachable block (ram,0x00496991) */
/* WARNING: Removing unreachable block (ram,0x004969f1) */
/* WARNING: Removing unreachable block (ram,0x004969a2) */

void FUN_004965f7(undefined4 param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  uint uVar2;
  uint uVar3;
  char *local_4e8;
  undefined1 local_4e0 [1024];
  undefined1 local_e0 [108];
  undefined1 local_74 [24];
  char local_5c [84];
  uint local_8;
  
  local_8 = DAT_00955fd4 ^ (uint)local_74;
  uVar3 = 0;
  if ((*(uint *)(in_ECX + 0x28) & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00491122();
  }
  if ((*(uint *)(in_ECX + 0x28) & 6) == 0) {
    if (8 < param_2) {
      if ((*(ushort *)(in_ECX + 0x2ce) & 0x8000) == 0) {
        if ((*(ushort *)(in_ECX + 0x2ce) & 4) == 0) {
          uVar2 = 0x51;
          if (param_2 < 0x51) {
            uVar2 = param_2;
          }
          FUN_00495a35(local_5c,uVar2);
          param_2 = param_2 - uVar2;
          do {
            if ((uVar2 <= uVar3) || (local_5c[uVar3] == '\0')) break;
            uVar3 = uVar3 + 1;
          } while (uVar3 < 0x50);
          if (uVar3 - 1 < 0x4f) {
            if ((uVar3 + 1 < uVar2) && (local_5c[uVar3 + 1] == '\0')) {
              iVar1 = FUN_00495bde(0x69434350);
              if (iVar1 == 0) {
                *(char **)(in_ECX + 0x38) = local_5c + uVar3 + 2;
                *(uint *)(in_ECX + 0x3c) = (uVar2 - uVar3) + -2;
                FUN_00495f11(local_4e0,&param_2,local_e0,0);
                local_4e8 = *(char **)(in_ECX + 0x50);
                *(undefined4 *)(in_ECX + 0x34) = 0;
              }
              else {
                local_4e8 = *(char **)(in_ECX + 0x50);
              }
            }
            else {
              local_4e8 = "bad compression method";
            }
          }
          else {
            local_4e8 = "bad keyword";
          }
        }
        else {
          local_4e8 = "too many profiles";
        }
        FUN_00495a5d();
        *(ushort *)(in_ECX + 0x2ce) = *(ushort *)(in_ECX + 0x2ce) | 0x8000;
        FUN_0048f707();
        if (local_4e8 != (char *)0x0) {
          FUN_004914ad();
        }
      }
      else {
        FUN_00495a5d();
      }
      goto LAB_00496a64;
    }
    FUN_00495a5d();
  }
  else {
    FUN_00495a5d();
  }
  FUN_004914ad();
LAB_00496a64:
  __security_check_cookie(local_8 ^ (uint)local_74);
  return;
}

