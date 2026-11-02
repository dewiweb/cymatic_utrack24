// rea decompile_all
// name: FUN_00647900
// address: 0x647900
// body: available
// range: 0x647900-0x647b40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x647b29 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647b35 to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x647b3c to 0x656590 FUN_00656590 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00647900(undefined4 param_1,char *param_2,char *param_3,char *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 in_EDX;
  char *pcVar8;
  char *local_468;
  uint local_464;
  int local_460;
  undefined1 local_5c;
  undefined1 auStack_5b [83];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_00648ed0(&local_5c);
  if (iVar3 == 0) {
switchD_0064795a_default:
                    /* WARNING: Subroutine does not return */
    FUN_00656590();
  }
  switch(in_EDX) {
  case 0:
  case 2:
    bVar2 = true;
    auStack_5b[iVar3] = 1;
LAB_0064798c:
    if (iVar3 + 2U < 0x52) {
      auStack_5b[iVar3 + 1] = 0;
      iVar3 = iVar3 + 3;
      pcVar5 = "";
      if (param_2 != (char *)0x0) {
        pcVar5 = param_2;
      }
      pcVar6 = pcVar5 + 1;
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      pcVar5 = pcVar5 + (1 - (int)pcVar6);
      pcVar6 = "";
      if (param_3 != (char *)0x0) {
        pcVar6 = param_3;
      }
      pcVar8 = pcVar6 + 1;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      pcVar6 = pcVar6 + (1 - (int)pcVar8);
      local_468 = "";
      if (param_4 != (char *)0x0) {
        local_468 = param_4;
      }
      if ((char *)(0x7fffffff - iVar3) < pcVar5) {
        pcVar8 = (char *)0x7fffffff;
      }
      else {
        pcVar8 = pcVar5 + iVar3;
      }
      if ((char *)(0x7fffffff - (int)pcVar8) < pcVar6) {
        pcVar8 = (char *)0x7fffffff;
      }
      else {
        pcVar8 = pcVar8 + (int)pcVar6;
      }
      pcVar7 = local_468;
      do {
        cVar1 = *pcVar7;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
      local_464 = (int)pcVar7 - (int)(local_468 + 1);
      local_460 = 0;
      if (!bVar2) {
        if (0x7fffffffU - (int)pcVar8 < local_464) {
                    /* WARNING: Subroutine does not return */
          FUN_00656590();
        }
LAB_00647a98:
        FUN_00649770(pcVar8 + local_460);
        FUN_00649730(iVar3);
        FUN_00649730(pcVar5);
        FUN_00649730(pcVar6);
        if (bVar2) {
          FUN_00649030();
        }
        else {
          FUN_00649730(local_464);
        }
        FUN_006496e0();
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      iVar4 = FUN_006490a0(&local_468,pcVar8);
      if (iVar4 == 0) goto LAB_00647a98;
      goto LAB_00647b33;
    }
    break;
  case 0xffffffff:
  case 1:
    if (iVar3 + 1U < 0x52) {
      auStack_5b[iVar3] = 0;
      bVar2 = false;
      goto LAB_0064798c;
    }
    break;
  default:
    goto switchD_0064795a_default;
  }
  ___report_rangecheckfailure();
LAB_00647b33:
                    /* WARNING: Subroutine does not return */
  FUN_00656590();
}

