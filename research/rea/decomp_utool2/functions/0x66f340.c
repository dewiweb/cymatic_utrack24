// rea decompile_all
// name: FUN_0066f340
// address: 0x66f340
// body: available
// range: 0x66f340-0x66f5d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x66f5d0 with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0066f340(int param_1,int *param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int *in_ECX;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char in_DL;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint local_524;
  uint local_518;
  int aiStack_510 [257];
  byte local_10c [260];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  if ((param_1 < 0) || (3 < param_1)) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x32;
    *(int *)(*in_ECX + 0x18) = param_1;
    (**(code **)*in_ECX)();
  }
  if (in_DL == '\0') {
    iVar3 = in_ECX[param_1 + 0x1a];
  }
  else {
    iVar3 = in_ECX[param_1 + 0x16];
  }
  if (iVar3 == 0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x32;
    *(int *)(*in_ECX + 0x18) = param_1;
    (**(code **)*in_ECX)();
  }
  if (*param_2 == 0) {
    iVar4 = (**(code **)in_ECX[1])();
    *param_2 = iVar4;
  }
  iVar4 = *param_2;
  uVar7 = 0;
  local_524 = 0;
  local_518 = 1;
  do {
    bVar1 = *(byte *)(local_518 + iVar3);
    uVar10 = (uint)bVar1;
    uVar12 = uVar10 + uVar7;
    if (0x100 < (int)uVar12) {
      *(undefined4 *)(*in_ECX + 0x14) = 8;
      (**(code **)*in_ECX)();
      uVar7 = local_524;
    }
    if (uVar10 != 0) {
      iVar5 = (local_518 & 0xff) * 0x1010101;
      pbVar6 = local_10c + uVar7;
      for (uVar8 = (uint)(bVar1 >> 2); uVar8 != 0; uVar8 = uVar8 - 1) {
        *(int *)pbVar6 = iVar5;
        pbVar6 = pbVar6 + 4;
      }
      for (uVar10 = uVar10 & 3; uVar7 = uVar12, local_524 = uVar12, uVar10 != 0; uVar10 = uVar10 - 1
          ) {
        *pbVar6 = (byte)iVar5;
        pbVar6 = pbVar6 + 1;
      }
    }
    local_518 = local_518 + 1;
  } while ((int)local_518 < 0x11);
  if (uVar7 < 0x101) {
    local_10c[uVar7] = 0;
    iVar5 = 0;
    iVar11 = 0;
    iVar9 = (int)(char)local_10c[0];
    if (local_10c[0] != 0) {
      pbVar6 = local_10c;
      uVar7 = 1 << (local_10c[0] & 0x1f) | 1U >> 0x20 - (local_10c[0] & 0x1f);
      do {
        bVar1 = *pbVar6;
        while ((char)bVar1 == iVar9) {
          bVar1 = local_10c[iVar11 + 1];
          aiStack_510[iVar11] = iVar5;
          iVar11 = iVar11 + 1;
          iVar5 = iVar5 + 1;
        }
        if ((int)uVar7 <= iVar5) {
          *(undefined4 *)(*in_ECX + 0x14) = 8;
          (**(code **)*in_ECX)();
        }
        uVar7 = uVar7 << 1 | (uint)((int)uVar7 < 0);
        pbVar6 = local_10c + iVar11;
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 * 2;
      } while (*pbVar6 != 0);
    }
    _memset((void *)(iVar4 + 0x400),0,0x100);
    uVar7 = 0xff;
    if (in_DL != '\0') {
      uVar7 = 0xf;
    }
    iVar5 = 0;
    if (0 < (int)local_524) {
      do {
        uVar12 = (uint)*(byte *)(iVar3 + 0x11 + iVar5);
        if ((uVar7 < uVar12) || (*(char *)(iVar4 + 0x400 + uVar12) != '\0')) {
          *(undefined4 *)(*in_ECX + 0x14) = 8;
          (**(code **)*in_ECX)();
        }
        *(int *)(iVar4 + uVar12 * 4) = aiStack_510[iVar5];
        pbVar6 = local_10c + iVar5;
        iVar5 = iVar5 + 1;
        *(byte *)(iVar4 + 0x400 + uVar12) = *pbVar6;
      } while (iVar5 < (int)local_524);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

