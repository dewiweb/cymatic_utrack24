// rea decompile_all
// name: FUN_00492c70
// address: 0x492c70
// body: available
// range: 0x492c70-0x492ece inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; The Ghidra Program references PDB uTool2.pdb (GUID 68172065-e825-46ab-8f91-aa0fc99e9bf1, age (hex) 1, signature unknown, version RSDS); Ghidra reports load state unknown. Original names and types may be missing; an empty name search does not prove a procedure is absent. Use list_procedures and address-based analysis to inspect recovered functions. REA does not admit a caller-selected PDB companion.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_00492c70(void)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  byte *pbVar7;
  undefined4 *in_EDX;
  byte *local_c;
  byte *local_8;
  
  local_8 = (byte *)*in_ECX;
LAB_00492c86:
  pbVar7 = local_8;
  bVar1 = *local_8;
  if ((bVar1 == 0x20) ||
     ((((char)bVar1 < '\x0e' && ('\b' < (char)bVar1)) || (iVar3 = FUN_00426f70(), iVar3 == 0x2c))))
  {
    local_8 = local_8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          local_8 = local_8 + 1;
          uVar4 = uVar4 >> 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
    goto LAB_00492c86;
  }
  iVar3 = FUN_00426f70();
  iVar5 = FID_conflict___iswdigit_l((wint_t)iVar3);
  if (((iVar5 != 0) || (iVar3 == 0x2d)) || (iVar3 == 0x2b)) {
    bVar1 = *local_8;
    local_8 = local_8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          uVar4 = uVar4 >> 1;
          local_8 = local_8 + 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
  }
LAB_00492d16:
  bVar1 = *local_8;
  if ((byte)(bVar1 - 0x30) < 10) {
    local_8 = local_8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          local_8 = local_8 + 1;
          uVar4 = uVar4 >> 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
    goto LAB_00492d16;
  }
  iVar3 = FUN_00426f70();
  if (iVar3 == 0x2e) {
    bVar1 = *local_8;
    local_8 = local_8 + 1;
    if ((char)bVar1 < '\0') {
      uVar4 = 0x40;
      if ((bVar1 & 0x40) != 0) {
        do {
          if (uVar4 < 9) break;
          uVar4 = uVar4 >> 1;
          local_8 = local_8 + 1;
        } while ((uVar4 & (int)(char)bVar1) != 0);
      }
    }
LAB_00492d76:
    bVar1 = *local_8;
    if ((byte)(bVar1 - 0x30) < 10) {
      local_8 = local_8 + 1;
      if ((char)bVar1 < '\0') {
        uVar4 = 0x40;
        if ((bVar1 & 0x40) != 0) {
          do {
            if (uVar4 < 9) break;
            local_8 = local_8 + 1;
            uVar4 = uVar4 >> 1;
          } while ((uVar4 & (int)(char)bVar1) != 0);
        }
      }
      goto LAB_00492d76;
    }
  }
  iVar3 = FUN_00426f70();
  if ((iVar3 == 0x65) || (iVar3 == 0x45)) {
    FUN_0044ebd0(1);
    iVar3 = FUN_00426f70();
    iVar5 = FID_conflict___iswdigit_l((wint_t)iVar3);
    local_c = local_8;
    if ((iVar5 != 0) || ((iVar3 == 0x2d || (iVar3 == 0x2b)))) {
      FUN_0044ebd0(2);
LAB_00492df6:
      bVar1 = *local_8;
      if ((byte)(bVar1 - 0x30) < 10) {
        local_8 = local_8 + 1;
        if ((char)bVar1 < '\0') {
          uVar4 = 0x40;
          if ((bVar1 & 0x40) != 0) {
            do {
              if (uVar4 < 9) break;
              local_8 = local_8 + 1;
              uVar4 = uVar4 >> 1;
            } while ((uVar4 & (int)(char)bVar1) != 0);
          }
        }
        goto LAB_00492df6;
      }
    }
  }
  if (local_8 == pbVar7) {
    *in_ECX = local_8;
    return 0;
  }
  puVar6 = (undefined4 *)FUN_0062cd70(pbVar7,local_8);
  uVar2 = *in_EDX;
  *in_EDX = *puVar6;
  *puVar6 = uVar2;
  pbVar7 = local_c + -8;
  if (pbVar7 != (byte *)&DAT_00bfe124) {
    LOCK();
    iVar3 = *(int *)pbVar7;
    *(int *)pbVar7 = *(int *)pbVar7 + -1;
    UNLOCK();
    if (iVar3 == 0) {
      FID_conflict__free(pbVar7);
    }
  }
  do {
    do {
      do {
        bVar1 = *local_8;
        if ((bVar1 != 0x20) &&
           ((('\r' < (char)bVar1 || ((char)bVar1 < '\t')) && (iVar3 = FUN_00426f70(), iVar3 != 0x2c)
            ))) {
          *in_ECX = local_8;
          return 1;
        }
        local_8 = local_8 + 1;
      } while (-1 < (char)bVar1);
      uVar4 = 0x40;
    } while ((bVar1 & 0x40) == 0);
    do {
      if (uVar4 < 9) break;
      local_8 = local_8 + 1;
      uVar4 = uVar4 >> 1;
    } while ((uVar4 & (int)(char)bVar1) != 0);
  } while( true );
}

