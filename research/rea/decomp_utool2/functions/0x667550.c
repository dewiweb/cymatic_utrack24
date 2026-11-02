// rea decompile_all
// name: FUN_00667550
// address: 0x667550
// body: available
// range: 0x667550-0x6678ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x6678ae with no resolved callee; its no-return basis is unknown.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00667550(int param_1,int *param_2)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int *in_ECX;
  uint uVar9;
  char in_DL;
  uint uVar10;
  undefined1 *puVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  undefined1 *puVar16;
  int local_52c;
  uint local_528;
  int local_520;
  uint local_518;
  undefined4 uStack_514;
  int aiStack_510 [257];
  byte local_10c [260];
  uint local_8;
  
  local_8 = DAT_00c76070 ^ (uint)&stack0xfffffffc;
  uStack_514._3_1_ = in_DL;
  if ((param_1 < 0) || (3 < param_1)) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x32;
    *(int *)(*in_ECX + 0x18) = param_1;
    (**(code **)*in_ECX)();
  }
  if (uStack_514._3_1_ == '\0') {
    iVar4 = in_ECX[param_1 + 0x2c];
  }
  else {
    iVar4 = in_ECX[param_1 + 0x28];
  }
  if (iVar4 == 0) {
    *(undefined4 *)(*in_ECX + 0x14) = 0x32;
    *(int *)(*in_ECX + 0x18) = param_1;
    (**(code **)*in_ECX)();
  }
  if (*param_2 == 0) {
    iVar5 = (**(code **)in_ECX[1])();
    *param_2 = iVar5;
  }
  iVar5 = *param_2;
  uVar10 = 0;
  local_528 = 0;
  *(int *)(iVar5 + 0x8c) = iVar4;
  local_518 = 1;
  do {
    bVar2 = *(byte *)(local_518 + iVar4);
    uVar13 = (uint)bVar2;
    uVar1 = uVar13 + uVar10;
    if (0x100 < (int)uVar1) {
      *(undefined4 *)(*in_ECX + 0x14) = 8;
      (**(code **)*in_ECX)();
      uVar10 = local_528;
    }
    if (uVar13 != 0) {
      iVar6 = (local_518 & 0xff) * 0x1010101;
      pbVar7 = local_10c + uVar10;
      for (uVar9 = (uint)(bVar2 >> 2); uVar9 != 0; uVar9 = uVar9 - 1) {
        *(int *)pbVar7 = iVar6;
        pbVar7 = pbVar7 + 4;
      }
      for (uVar13 = uVar13 & 3; uVar10 = uVar1, local_528 = uVar1, uVar13 != 0; uVar13 = uVar13 - 1)
      {
        *pbVar7 = (byte)iVar6;
        pbVar7 = pbVar7 + 1;
      }
    }
    local_518 = local_518 + 1;
  } while ((int)local_518 < 0x11);
  if (uVar10 < 0x101) {
    local_10c[uVar10] = 0;
    iVar6 = 0;
    iVar14 = 0;
    iVar12 = (int)(char)local_10c[0];
    if (local_10c[0] != 0) {
      pbVar7 = local_10c;
      uVar10 = 1 << (local_10c[0] & 0x1f) | 1U >> 0x20 - (local_10c[0] & 0x1f);
      do {
        bVar2 = *pbVar7;
        while ((char)bVar2 == iVar12) {
          bVar2 = local_10c[iVar14 + 1];
          aiStack_510[iVar14] = iVar6;
          iVar14 = iVar14 + 1;
          iVar6 = iVar6 + 1;
        }
        if ((int)uVar10 <= iVar6) {
          *(undefined4 *)(*in_ECX + 0x14) = 8;
          (**(code **)*in_ECX)(in_ECX);
        }
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        pbVar7 = local_10c + iVar14;
        iVar6 = iVar6 * 2;
        iVar12 = iVar12 + 1;
      } while (*pbVar7 != 0);
    }
    iVar14 = 0;
    iVar6 = 1;
    do {
      if (*(char *)(iVar6 + iVar4) == '\0') {
        *(undefined4 *)(iVar5 + iVar6 * 4) = 0xffffffff;
      }
      else {
        *(int *)(iVar5 + 0x48 + iVar6 * 4) = iVar14 - aiStack_510[iVar14];
        iVar14 = iVar14 + (uint)*(byte *)(iVar6 + iVar4);
        *(undefined4 *)(iVar5 + iVar6 * 4) = (&uStack_514)[iVar14];
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x11);
    *(undefined4 *)(iVar5 + 0x44) = 0xfffff;
    _memset((void *)(iVar5 + 0x90),0,0x400);
    iVar14 = 0;
    local_520 = 7;
    local_518 = 0;
    iVar6 = 1;
    do {
      if (*(char *)(iVar6 + iVar4) != '\0') {
        iVar12 = 1 << ((byte)local_520 & 0x1f);
        puVar16 = (undefined1 *)(iVar4 + 0x11 + iVar14);
        local_52c = 1;
        do {
          iVar14 = aiStack_510[iVar14] << ((byte)local_520 & 0x1f);
          if (0 < iVar12) {
            piVar15 = (int *)(iVar5 + (iVar14 + 0x24) * 4);
            iVar8 = iVar12;
            puVar11 = (undefined1 *)(iVar5 + 0x490 + iVar14);
            do {
              *piVar15 = iVar6;
              piVar15 = piVar15 + 1;
              iVar8 = iVar8 + -1;
              *puVar11 = *puVar16;
              puVar11 = puVar11 + 1;
            } while (0 < iVar8);
          }
          local_52c = local_52c + 1;
          puVar16 = puVar16 + 1;
          iVar14 = local_518 + 1;
          local_518 = iVar14;
        } while (local_52c <= (int)(uint)*(byte *)(iVar6 + iVar4));
      }
      iVar6 = iVar6 + 1;
      local_520 = local_520 + -1;
    } while (-1 < local_520);
    if ((uStack_514._3_1_ != '\0') && (iVar5 = 0, 0 < (int)local_528)) {
      do {
        if (0xf < *(byte *)(iVar4 + 0x11 + iVar5)) {
          *(undefined4 *)(*in_ECX + 0x14) = 8;
          (**(code **)*in_ECX)(in_ECX);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_528);
    }
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  ___report_rangecheckfailure();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

