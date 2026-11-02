// rea decompile_all
// name: FUN_00436568
// address: 0x436568
// body: available
// range: 0x436568-0x4369c6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_00436568(undefined4 param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int *in_EAX;
  int in_ECX;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *local_20;
  undefined1 *local_1c;
  undefined1 *local_18;
  int local_14;
  byte *local_10;
  uint local_c;
  uint local_8;
  
  local_10 = (byte *)*in_EAX;
  local_14 = in_EAX[1];
  puVar7 = *(undefined1 **)(in_ECX + 0x34);
  puVar2 = *(undefined4 **)(in_ECX + 4);
  local_c = *(uint *)(in_ECX + 0x20);
  local_8 = *(uint *)(in_ECX + 0x1c);
  if (puVar7 < *(undefined1 **)(in_ECX + 0x30)) {
    local_18 = *(undefined1 **)(in_ECX + 0x30) + (-1 - (int)puVar7);
  }
  else {
    local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar7);
  }
  do {
    puVar6 = puVar7;
    switch(*puVar2) {
    case 0:
      puVar2[3] = (uint)*(byte *)(puVar2 + 4);
      puVar2[2] = puVar2[5];
      *puVar2 = 1;
    case 1:
      for (; local_8 < (uint)puVar2[3]; local_8 = local_8 + 8) {
        if (local_14 == 0) goto LAB_0043694a;
        param_1 = 0;
        local_14 = local_14 + -1;
        local_c = local_c | (uint)*local_10 << ((byte)local_8 & 0x1f);
        local_10 = local_10 + 1;
      }
      local_20 = (byte *)(puVar2[2] + (*(uint *)(&DAT_0090e5c8 + puVar2[3] * 4) & local_c) * 8);
      local_c = local_c >> (local_20[1] & 0x1f);
      local_8 = local_8 - local_20[1];
      bVar1 = *local_20;
      uVar5 = (uint)bVar1;
      if (uVar5 == 0) {
        local_20 = *(byte **)(local_20 + 4);
        *puVar2 = 6;
      }
      else {
        if ((bVar1 & 0x10) != 0) {
          puVar2[2] = uVar5 & 0xf;
          puVar2[1] = *(undefined4 *)(local_20 + 4);
          *puVar2 = 2;
          break;
        }
        if ((bVar1 & 0x40) != 0) {
          if ((bVar1 & 0x20) == 0) {
            *puVar2 = 9;
            in_EAX[6] = (int)"invalid literal/length code";
switchD_004365ab_caseD_9:
            param_1 = 0xfffffffd;
            goto LAB_0043691e;
          }
          *puVar2 = 7;
          break;
        }
LAB_00436658:
        puVar2[3] = uVar5;
        local_20 = local_20 + *(int *)(local_20 + 4) * 8;
      }
      puVar2[2] = local_20;
      break;
    case 2:
      for (; local_8 < (uint)puVar2[2]; local_8 = local_8 + 8) {
        if (local_14 == 0) goto LAB_0043694a;
        param_1 = 0;
        local_14 = local_14 + -1;
        local_c = local_c | (uint)*local_10 << ((byte)local_8 & 0x1f);
        local_10 = local_10 + 1;
      }
      puVar2[1] = puVar2[1] + (*(uint *)(&DAT_0090e5c8 + puVar2[2] * 4) & local_c);
      local_c = local_c >> ((byte)puVar2[2] & 0x1f);
      local_8 = local_8 - puVar2[2];
      puVar2[3] = (uint)*(byte *)((int)puVar2 + 0x11);
      puVar2[2] = puVar2[6];
      *puVar2 = 3;
    case 3:
      for (; local_8 < (uint)puVar2[3]; local_8 = local_8 + 8) {
        if (local_14 == 0) goto LAB_0043694a;
        param_1 = 0;
        local_14 = local_14 + -1;
        local_c = local_c | (uint)*local_10 << ((byte)local_8 & 0x1f);
        local_10 = local_10 + 1;
      }
      local_20 = (byte *)(puVar2[2] + (*(uint *)(&DAT_0090e5c8 + puVar2[3] * 4) & local_c) * 8);
      local_c = local_c >> (local_20[1] & 0x1f);
      local_8 = local_8 - local_20[1];
      bVar1 = *local_20;
      uVar5 = (uint)bVar1;
      if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) goto LAB_00436658;
        *puVar2 = 9;
        in_EAX[6] = (int)"invalid distance code";
        goto switchD_004365ab_caseD_9;
      }
      puVar2[2] = uVar5 & 0xf;
      puVar2[3] = *(undefined4 *)(local_20 + 4);
      *puVar2 = 4;
      break;
    case 4:
      for (; local_8 < (uint)puVar2[2]; local_8 = local_8 + 8) {
        if (local_14 == 0) goto LAB_0043694a;
        param_1 = 0;
        local_14 = local_14 + -1;
        local_c = local_c | (uint)*local_10 << ((byte)local_8 & 0x1f);
        local_10 = local_10 + 1;
      }
      puVar2[3] = puVar2[3] + (*(uint *)(&DAT_0090e5c8 + puVar2[2] * 4) & local_c);
      local_c = local_c >> ((byte)puVar2[2] & 0x1f);
      local_8 = local_8 - puVar2[2];
      *puVar2 = 5;
    case 5:
      local_1c = puVar7 + -puVar2[3];
      if (local_1c < *(undefined1 **)(in_ECX + 0x28)) {
        do {
          local_1c = local_1c + (*(int *)(in_ECX + 0x2c) - (int)*(undefined1 **)(in_ECX + 0x28));
        } while (local_1c < *(undefined1 **)(in_ECX + 0x28));
      }
      while (puVar2[1] != 0) {
        puVar6 = puVar7;
        if (local_18 == (undefined1 *)0x0) {
          if (puVar7 == *(undefined1 **)(in_ECX + 0x2c)) {
            local_18 = *(undefined1 **)(in_ECX + 0x30);
            puVar6 = *(undefined1 **)(in_ECX + 0x28);
            if (local_18 != puVar6) {
              if (puVar6 < local_18) {
                local_18 = local_18 + (-1 - (int)puVar6);
              }
              else {
                local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
              }
              puVar7 = puVar6;
              if (local_18 != (undefined1 *)0x0) goto LAB_00436856;
            }
          }
          *(undefined1 **)(in_ECX + 0x34) = puVar7;
          param_1 = FUN_00436454(param_1);
          puVar6 = *(undefined1 **)(in_ECX + 0x34);
          if (puVar6 < *(undefined1 **)(in_ECX + 0x30)) {
            local_18 = *(undefined1 **)(in_ECX + 0x30) + (-1 - (int)puVar6);
          }
          else {
            local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
          }
          if (puVar6 == *(undefined1 **)(in_ECX + 0x2c)) {
            puVar7 = *(undefined1 **)(in_ECX + 0x28);
            puVar3 = *(undefined1 **)(in_ECX + 0x30);
            if (puVar3 != puVar7) {
              puVar6 = puVar7;
              if (puVar7 < puVar3) {
                local_18 = puVar3 + (-1 - (int)puVar7);
              }
              else {
                local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar7);
              }
            }
          }
          if (local_18 == (undefined1 *)0x0) goto LAB_0043691e;
        }
LAB_00436856:
        param_1 = 0;
        *puVar6 = *local_1c;
        puVar7 = puVar6 + 1;
        local_1c = local_1c + 1;
        local_18 = local_18 + -1;
        if (local_1c == *(undefined1 **)(in_ECX + 0x2c)) {
          local_1c = *(undefined1 **)(in_ECX + 0x28);
        }
        puVar2[1] = puVar2[1] + -1;
      }
      *puVar2 = 0;
      break;
    case 6:
      if (local_18 != (undefined1 *)0x0) goto LAB_00436900;
      if (puVar7 == *(undefined1 **)(in_ECX + 0x2c)) {
        local_18 = *(undefined1 **)(in_ECX + 0x30);
        puVar6 = *(undefined1 **)(in_ECX + 0x28);
        if (local_18 != puVar6) {
          if (puVar6 < local_18) {
            local_18 = local_18 + (-1 - (int)puVar6);
          }
          else {
            local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
          }
          puVar7 = puVar6;
          if (local_18 != (undefined1 *)0x0) goto LAB_00436900;
        }
      }
      *(undefined1 **)(in_ECX + 0x34) = puVar7;
      param_1 = FUN_00436454(param_1);
      puVar6 = *(undefined1 **)(in_ECX + 0x34);
      if (puVar6 < *(undefined1 **)(in_ECX + 0x30)) {
        local_18 = *(undefined1 **)(in_ECX + 0x30) + (-1 - (int)puVar6);
      }
      else {
        local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
      }
      if (puVar6 == *(undefined1 **)(in_ECX + 0x2c)) {
        puVar7 = *(undefined1 **)(in_ECX + 0x28);
        puVar3 = *(undefined1 **)(in_ECX + 0x30);
        if (puVar3 != puVar7) {
          puVar6 = puVar7;
          if (puVar7 < puVar3) {
            local_18 = puVar3 + (-1 - (int)puVar7);
          }
          else {
            local_18 = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar7);
          }
        }
      }
      if (local_18 == (undefined1 *)0x0) goto LAB_0043691e;
LAB_00436900:
      param_1 = 0;
      *puVar6 = *(undefined1 *)(puVar2 + 2);
      puVar7 = puVar6 + 1;
      local_18 = local_18 + -1;
      *puVar2 = 0;
      break;
    case 7:
      if (7 < local_8) {
        local_8 = local_8 - 8;
        local_14 = local_14 + 1;
        local_10 = local_10 + -1;
      }
      *(undefined1 **)(in_ECX + 0x34) = puVar7;
      param_1 = FUN_00436454(param_1);
      puVar7 = *(undefined1 **)(in_ECX + 0x34);
      if (*(undefined1 **)(in_ECX + 0x30) == puVar7) {
        *puVar2 = 8;
switchD_004365ab_caseD_8:
        param_1 = 1;
        puVar6 = puVar7;
LAB_0043691e:
        *(uint *)(in_ECX + 0x20) = local_c;
        *(uint *)(in_ECX + 0x1c) = local_8;
        in_EAX[1] = local_14;
        puVar7 = puVar6;
LAB_00436930:
        iVar4 = *in_EAX;
        *in_EAX = (int)local_10;
        in_EAX[2] = (int)(local_10 + (in_EAX[2] - iVar4));
      }
      else {
        *(uint *)(in_ECX + 0x20) = local_c;
        *(uint *)(in_ECX + 0x1c) = local_8;
        in_EAX[1] = local_14;
        iVar4 = *in_EAX;
        *in_EAX = (int)local_10;
        in_EAX[2] = (int)(local_10 + (in_EAX[2] - iVar4));
      }
      *(undefined1 **)(in_ECX + 0x34) = puVar7;
      FUN_00436454(param_1);
      return;
    case 8:
      goto switchD_004365ab_caseD_8;
    case 9:
      goto switchD_004365ab_caseD_9;
    default:
      param_1 = 0xfffffffe;
      goto LAB_0043691e;
    }
  } while( true );
LAB_0043694a:
  *(uint *)(in_ECX + 0x20) = local_c;
  *(uint *)(in_ECX + 0x1c) = local_8;
  in_EAX[1] = 0;
  goto LAB_00436930;
}

