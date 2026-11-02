// rea decompile_all
// name: FUN_006ac180
// address: 0x6ac180
// body: available
// range: 0x6ac180-0x6ac369 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_006ac180(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  if (*(int *)(in_ECX + 0x78) == 0) {
    return 0;
  }
  if (*(int *)(*(int *)(in_ECX + 0x78) + 8) == 0) {
    return 0;
  }
  iVar4 = 0;
  iVar3 = 0;
  if ((*(byte *)(in_ECX + 0x278) & 2) == 0) {
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    if (*(int *)(iVar1 + 0x10) < 0) goto LAB_006ac1d8;
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    if (*(int *)(in_ECX + 0x18) < *(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x10))
    goto LAB_006ac1d8;
  }
  else {
LAB_006ac1d8:
    if (param_1 < 0x14) {
      iVar4 = 0x14 - param_1;
LAB_006ac1fd:
      if (-1 < iVar4) goto LAB_006ac230;
      if (*(int *)(in_ECX + 0x78) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
      }
      iVar1 = (*(int *)(in_ECX + 0xb8) - *(int *)(iVar1 + 0x18)) - *(int *)(iVar1 + 0x10);
      if (iVar4 < -10) {
        iVar4 = -10;
        if (-10 < iVar1) {
          iVar4 = iVar1;
        }
        goto LAB_006ac256;
      }
      bVar7 = SBORROW4(iVar4,iVar1);
      bVar6 = iVar4 - iVar1 < 0;
    }
    else {
      if (*(int *)(in_ECX + 0xb8) + -0x14 <= param_1) {
        iVar4 = (*(int *)(in_ECX + 0xb8) - param_1) + -0x14;
        goto LAB_006ac1fd;
      }
LAB_006ac230:
      if (*(int *)(in_ECX + 0x78) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
      }
      iVar1 = -*(int *)(iVar1 + 0x10);
      if (iVar4 < 0xb) {
        bVar7 = SBORROW4(iVar1,iVar4);
        bVar6 = iVar1 - iVar4 < 0;
      }
      else {
        iVar4 = 10;
        bVar7 = SBORROW4(iVar1,10);
        bVar6 = iVar1 + -10 < 0;
      }
    }
    if (bVar7 != bVar6) {
      iVar4 = iVar1;
    }
  }
LAB_006ac256:
  if ((*(byte *)(in_ECX + 0x178) & 2) == 0) {
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    if (-1 < *(int *)(iVar1 + 0x14)) {
      if (*(int *)(in_ECX + 0x78) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
      }
      if (*(int *)(iVar1 + 0x1c) + *(int *)(iVar1 + 0x14) <= *(int *)(in_ECX + 0x1c))
      goto LAB_006ac309;
    }
  }
  if (param_2 < 0x14) {
    iVar3 = 0x14 - param_2;
LAB_006ac2b0:
    if (-1 < iVar3) goto LAB_006ac2e3;
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    iVar1 = (*(int *)(in_ECX + 0xbc) - *(int *)(iVar1 + 0x1c)) - *(int *)(iVar1 + 0x14);
    if (iVar3 < -10) {
      iVar3 = -10;
      if (-10 < iVar1) {
        iVar3 = iVar1;
      }
      goto LAB_006ac309;
    }
    bVar7 = SBORROW4(iVar3,iVar1);
    bVar6 = iVar3 - iVar1 < 0;
  }
  else {
    if (*(int *)(in_ECX + 0xbc) + -0x14 <= param_2) {
      iVar3 = (*(int *)(in_ECX + 0xbc) - param_2) + -0x14;
      goto LAB_006ac2b0;
    }
LAB_006ac2e3:
    if (*(int *)(in_ECX + 0x78) == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
    }
    iVar1 = -*(int *)(iVar1 + 0x14);
    if (iVar3 < 0xb) {
      bVar7 = SBORROW4(iVar1,iVar3);
      bVar6 = iVar1 - iVar3 < 0;
    }
    else {
      iVar3 = 10;
      bVar7 = SBORROW4(iVar1,10);
      bVar6 = iVar1 + -10 < 0;
    }
  }
  if (bVar7 != bVar6) {
    iVar3 = iVar1;
  }
LAB_006ac309:
  if ((iVar4 == 0) && (iVar3 == 0)) {
    return 0;
  }
  if (*(int *)(in_ECX + 0x78) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
  }
  if (*(int *)(in_ECX + 0x78) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
  }
  if (*(int *)(in_ECX + 0x78) == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(in_ECX + 0x78) + 8);
  }
  FUN_006e9790(*(int *)(iVar2 + 0x10) + iVar4,*(int *)(iVar1 + 0x14) + iVar3,
               *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c));
  return 1;
}

